#!/usr/bin/env python3

import socket
import os
import csv
import re
from time import time
from typing import Sequence, Optional, Tuple


def handle_socket_data(line: str) -> None:
    # print("Line is:", line)
    if ">>" not in line:
        # print(f"Ignoring message: '{line}'")
        return
    msgtype, _, data = line.partition(">>")
    match msgtype:
        case "activewindow":
            appname, _, title = data.partition(",")
            has_data = appname.strip() or title.strip()

            if has_data:
                print("Switched to new window...")
                print(f"Active App: {appname}")
                print(f"Active Title: {title}")
            else:
                print("Empty window, resetting")
                # otherwise, if we switched to something like an empty desktop, reset

        case _:
            pass

HYPRLAND_INSTANCE_SIGNATURE = os.environ["HYPRLAND_INSTANCE_SIGNATURE"]

def main() -> None:

    possible_filepaths = [
        os.path.join(
            os.environ["XDG_RUNTIME_DIR"],
            "hypr",
            HYPRLAND_INSTANCE_SIGNATURE,
            ".socket2.sock",
        ),
        os.path.join("/tmp/hypr/", HYPRLAND_INSTANCE_SIGNATURE, ".socket2.sock"),
    ]

    socket_path = None
    for sp in possible_filepaths:
        if os.path.exists(sp):
            socket_path = sp
            break

    if socket_path is None:
        print(
            f"Could not find socket file at {possible_filepaths=}", fg="red", err=True
        )
        exit(1)

    with socket.socket(socket.AF_UNIX, socket.SOCK_STREAM) as client_socket:
        client_socket.connect(socket_path)

        while True:
            line = client_socket.recv(1024).decode("utf-8")
            if not line:
                break
            for ln in line.splitlines():
                handle_socket_data(ln)


if __name__ == "__main__":
    main()
