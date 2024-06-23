#!/usr/bin/env bash

trap 'exit -1' err

if [ -d build ]; then rm -rf build; fi

BASE_PATH=$PWD

mkdir -p build/release
pushd build/release
cmake -DCMAKE_BUILD_TYPE=Release $BASE_PATH
popd

mkdir -p build/relwdbg
pushd build/relwdbg
cmake -DCMAKE_BUILD_TYPE=RelWithDebInfo $BASE_PATH
popd

mkdir -p build/debug
pushd build/debug
cmake -DCMAKE_BUILD_TYPE=Debug $BASE_PATH
popd
