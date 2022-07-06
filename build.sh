#!/bin/bash
set -xe

if [ -d "./out" ]; then
    rm -rf out
fi
mkdir out

cmake -S %cd% -B out -G Ninja
ninja -C out