# C++サンプル

## 概要

GoogleTestの導入．

```
$ source makeenv.sh
```

## ディレクトリ構成

```
|- cpp_sample/
   |- README.md              - 本ファイル
   |- makeenv.sh             - 環境構築用スクリプト
   |- include/               - ヘッダファイル
   |  |- example.hpp
   |
   |- main/                  - メインファイル
   |  |- main.cpp
   |
   |- src                    - ソースファイル
   |  |- example.cpp
   |
   |- test/                  - テストファイル
      |- gtest_example.cpp
```

## コンパイルと実行

メインプログラムのコンパイルと実行．

```
$ g++ -std=c++11 main/main.cpp src/example.cpp -I. -o main.o
$ ./main.o name 1 2
name : name
value: 3
```

テストプログラムのコンパイルと実行．

```
$ g++ -std=c++11 test/gtest_example.cpp src/example.cpp -I. -Igoogletest-release-1.10.0/googletest/include -Lgoogletest-release-1.10.0/googletest/build/lib -lgtest -lgtest_main -lpthread -o test.o
$ ./test.o
Running main() from /home/hiroshi/Documents/cpp/cpp_sample/googletest-release-1.10.0/googletest/src/gtest_main.cc
[==========] Running 1 test from 1 test suite.
[----------] Global test environment set-up.
[----------] 1 test from ExampleTest
[ RUN      ] ExampleTest.AddValue
[       OK ] ExampleTest.AddValue (0 ms)
[----------] 1 test from ExampleTest (0 ms total)

[----------] Global test environment tear-down
[==========] 1 test from 1 test suite ran. (0 ms total)
[  PASSED  ] 1 test.
```

