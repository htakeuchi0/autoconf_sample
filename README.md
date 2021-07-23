# C++サンプルプロジェクト

## 概要

C++のサンプルプロジェクト．    
Google Test の使用例を含む．

確認済みの動作環境は以下のとおりである．
* OS: Linux (Ubuntu 18.04.3 LTS)
* コンパイラ: g++ (Ubuntu 7.4.0-1ubuntu1~18.04.1) 7.4.0

## ディレクトリ構成

`makeenv.sh`を実行する前のディレクトリ構成は以下の通り．

```
|- cpp_sample/
   |- Doxyfile               - doxygen設定ファイル
   |- Makefile               - makeファイル
   |- README.md              - 本ファイル
   |- include/               - ヘッダファイル
   |  |- example.hpp
   |
   |- main/                  - メインファイル
   |  |- main.cpp
   |
   |- scripts/               - 環境構築用スクリプト
   |  |- download_gtest.h
   |  |- download_doxygen.h
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
$ make run
```

テストプログラムのコンパイルと実行．    

```
$ make test
```

## Doxygenの生成

以下のコマンドでhtmlファイルが生成できる．    
`doxygen/html/index.html`をブラウザで開いて読める．    

```
$ make docs
```

