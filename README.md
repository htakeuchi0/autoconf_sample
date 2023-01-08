# C++ autoconf サンプルプロジェクト

## 概要

本ソースセットは，C++ の autoconf サンプルプロジェクトです．

確認済みの動作環境は以下のとおりです．    
* OS: Linux (Ubuntu 22.04.1 LTS)
  * コンパイラ: g++ (Ubuntu 11.3.0-1ubuntu1~22.04) 11.3.0

## ディレクトリ構成

```
|- cpp_env_sample/
   |- Doxyfile               - doxygen設定ファイル
   |- LICENSE                - ラインセンスファイル
   |- Makefile.am
   |- Makefile.in
   |- README.md              - 本ファイル
   |- aclocal.m4
   |- compile
   |- config.guess
   |- config.h.in
   |- config.sub
   |- configure
   |- configure.ac
   |- depcomp
   |- include/               - ヘッダファイル
   |  |- Makefile.am
   |  |- Makefile.in
   |  |- cpp_env_sample/
   |     |- example.h
   |
   |- install-sh
   |- ltmain.sh
   |- m4/
   |- main/                  - メインファイル
   |  |- Makefile.am
   |  |- Makefile.in
   |  |- main.cc
   |
   |- missing
   |
   |- scripts/               - 環境構築用スクリプト
   |  |- install_doxygen.sh
   |  |- install_gtest.sh
   |  |- install_lcov.sh
   |
   |- src/                   - ソースファイル
   |  |- Makefile.am
   |  |- Makefile.in
   |  |- example.cc
   |
   |- test/                  - テストファイル
   |  |- Makefile.am
   |  |- Makefile.in
   |  |- gtest_example.cc
   |
   |- test-driver
```

## 準備

本ソースセットでは，単体試験，カバレッジ計測，ドキュメント生成に，それぞれ以下を利用します．
* Google Test
* LCOV
* doxygen

`scripts` ディレクトリにそれぞれをインストールするためのスクリプトが配置されているため，
必要に応じて実行してください．

ソースコードのビルドには `make` を使います．    
Google Test のインストールには `cmake` が必要です．    

## 使い方

### サンプルコードの実行

ソースコードをビルドしてサンプルコードを実行する方法は以下のとおりです．

```
$ ./configure
$ make
$ sudo make install
$ acsample
```

### 共有ライブラリのビルドとインストール

ソースコードをビルドして共有ライブラリを生成する方法は以下のとおりです．

```
$ ./configure
$ make
$ sudo make install
```

`/usr/local/include/cpp_env_sample/` 以下にヘッダファイルが配置され，`/usr/local/lib/` 以下に共有ライブラリ `libacsample.so`, `libacsample.so.*` が配置されます．

別プロジェクトでこの共有ライブラリを使う場合は，`libacsample.so` をリンクして下さい (`-lacsample`)．

ヘッダファイルと共有ライブラリをアンインストールする方法は以下のとおりです．

```
$ sudo make uninstall
```

### テストコードの実行

テストコードをビルドしてテストを実行する方法は以下のとおりです．    
これを実行するには Google Test のインストールが必要です．

```
$ make check
```

### テストコードとカバレッジツールの実行

テストコードをビルドしてテストを実行し，カバレッジ計測結果を出力する方法は以下のとおりです．    
これを実行するには LCOV のインストールが必要です．

```
$ make lcov
```

結果はブラウザから確認できます．

```
$ firefox lcov/index.html &
```

### ドキュメントの生成

ドキュメントを生成する方法は以下のとおりです．    
これを実行するには doxygen のインストールが必要です．

```
$ make docs
```

結果はブラウザから確認できます．

```
$ firefox doxygen/html/index.html &
```

