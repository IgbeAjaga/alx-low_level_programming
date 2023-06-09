#!/bin/bash
cp /bin/ls /tmp/evil
export PATH="/tmp:$PATH"
export LD_PRELOAD="/tmp/libevil.so"
