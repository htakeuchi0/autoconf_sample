# C++サンプルプロジェクト

## 概要

C++のサンプルプロジェクト．    
Google Test の使用例を含む．

確認済みの動作環境は以下のとおりである．
* OS: Linux (Ubuntu 18.04.3 LTS)
* コンパイラ: g++ (Ubuntu 7.4.0-1ubuntu1~18.04.1) 7.4.0

## 環境構築

以下のコマンドで Google Test を導入できる．

```
$ source makeenv.sh
```

## ディレクトリ構成

`makeenv.sh`を実行する前のディレクトリ構成は以下の通り．

```
|- cpp_sample/
   |- Doxyfile               - doxygen設定ファイル
   |- Makefile               - makeファイル
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
`make build` でもよい．

```
$ g++ -std=c++17 main/main.cpp src/example.cpp -I. -o main.o
$ ./main.o name 1 2
name : name
value: 3
```

テストプログラムのコンパイルと実行．    
`make test` でもよい．

```
$ g++ -std=c++17 test/gtest_example.cpp src/example.cpp -I. -Igoogletest-release-1.10.0/googletest/include -Lgoogletest-release-1.10.0/googletest/build/lib -lgtest -lgtest_main -lpthread -o test.o
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

## Doxygenの生成

以下のコマンドでhtmlファイルが生成できる．    
`doxygen/html/index.html`をブラウザで開いて読める．    
`make docs` でもよい．

```
$ doxygen
```

