lib_LTLIBRARIES = libacsample.la
noinst_LTLIBRARIES = libacsampled.la
libacsample_la_SOURCES = example.cc
libacsample_la_CXXFLAGS = -std=c++17 -s -Wall -I$(top_builddir)/include -I/usr/local/include
libacsample_la_LDFLAGS = -version-info 0:3:0
libacsampled_la_SOURCES = example.cc
libacsampled_la_CXXFLAGS = -std=c++17 -s -Wall -fprofile-arcs -ftest-coverage -fno-inline -fno-inline-small-functions -fno-default-inline -I$(top_builddir)/include -I/usr/local/include
