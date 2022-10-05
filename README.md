# C++サンプルプロジェクト

## 概要

本ソースセットは，C++のサンプルプロジェクトです．

確認済みの動作環境は以下のとおりです．    
* OS: Linux (Ubuntu 18.04.5 LTS)
  * コンパイラ: g++ (Ubuntu 7.5.0-3ubuntu1~18.04) 7.5.0

## ディレクトリ構成

```
|- cpp_env_sample/
   |- Doxyfile               - doxygen設定ファイル
   |- LICENSE                - ラインセンスファイル
   |- Makefile               - makeファイル
   |- README.md              - 本ファイル
   |- include/               - ヘッダファイル
   |  |- cpp_env_sample/
   |     |- example.h
   |
   |- main/                  - メインファイル
   |  |- main.cc
   |
   |- scripts/               - 環境構築用スクリプト
   |  |- install_doxygen.sh
   |  |- install_gtest.sh
   |  |- install_lcov.sh
   |
   |- src/                   - ソースファイル
   |  |- example.cc
   |
   |- test/                  - テストファイル
      |- gtest_example.cc
```

## 使い方

### サンプルコードの実行

ソースコードをビルドしてサンプルコードを実行する方法は以下のとおりです．
`make` は `make build` でも可能です．

```
$ make
$ ./cpp_env_sample
```

### 共有ライブラリのビルドとインストール

ソースコードをビルドして共有ライブラリを生成する方法は以下のとおりです．

```
$ make lib
```

ヘッダファイルと共有ライブラリをインストールする方法は以下のとおりです．   
`/usr/local/include/cpp_env_sample/` 以下にヘッダファイルが配置され，`/usr/local/lib/` 以下に共有ライブラリ `libcppenvsample.so`, `libcppenvsample.so.*` が配置されます．

```
$ make lib
$ sudo make install
```

別プロジェクトでこの共有ライブラリを使う場合は，`libcppenvsample.so` をリンクして下さい (`-lcppenvsample`)．

ヘッダファイルと共有ライブラリをアンインストールする方法は以下のとおりです．

```
$ sudo make uninstall
```

### テストコードの実行

テストコードをビルドしてテストを実行する方法は以下のとおりです．    
これを実行するには Google Test のインストールが必要です．

```
$ make test
$ ./test_cpp_env_sample
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

### 一括実行

ソースコード，共有ライブラリ，テストコードをビルドし，カバレッジ計測結果とドキュメント生成まで行う方法は以下のとおりです．

```
$ make all
```
