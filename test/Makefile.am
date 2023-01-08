TESTS = test_acsample
check_PROGRAMS = test_acsample
test_acsample_SOURCES = gtest_example.cc
test_acsample_CXXFLAGS = -std=c++17 -s -Wall -fprofile-arcs -ftest-coverage -fno-inline -fno-inline-small-functions -fno-default-inline -I$(top_builddir)/include -I/usr/local/include
test_acsample_LDADD = ../src/libacsampled.la -lgtest -lgtest_main -lpthread
