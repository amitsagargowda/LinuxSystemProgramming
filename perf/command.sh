#!/bin/sh
echo 1 > foo.txt
sync
rm -rf ~/foodir
mkdir ~/foodir
