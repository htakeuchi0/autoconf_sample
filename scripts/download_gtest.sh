#!/bin/bash
version=1.10.0
if [ ! -e googletest-release-${version} ]; then
	wget https://github.com/google/googletest/archive/release-${version}.tar.gz
	tar -zxvf release-${version}.tar.gz
	cd googletest-release-${version}/googletest/
	mkdir build
	cd build
	cmake ..
	make
	cd ../../../
	rm release-${version}.tar.gz
fi
