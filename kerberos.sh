#!/usr/bin/env sh

rsync -arv keyboards/kerberos/ /home/stratos/qmk_firmware/keyboards/kerberos/
qmk flash
