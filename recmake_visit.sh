#!/bin/sh
rm -f CMakeCache.txt
/usr/bin/cmake  -DVISIT_MANTA="ON" /export/ahota/visit/visitOSPRay/visit2.8.1/src
