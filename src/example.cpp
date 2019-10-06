/**
 * @file example.cpp
 * @brief サンプルクラスを定義するソースファイル．
 */

#include "include/example.hpp"

/*
 * サンプル名前空間
 */
namespace example {

/**
 * コンストラクタ．
 * @param name 名前
 * @param value 値
 */
Example::Example(std::string name, int value) :
    name_(name), 
    value_(value) {
}

/*
 * デストラクタ．
 */
Example::~Example() {
}

/**
 * 名前を返す．
 * @return 名前
 */
std::string Example::Name() const {
    return name_;
}

/**
 * 値を返す．
 * @return 値
 */
int Example::Value() const {
    return value_;
}

/**
 * 名前を設定する．
 * @param name 名前
 */
void Example::SetName(std::string name) {
    name_ = name;
}

/**
 * 値を設定する．
 * @param value 値
 */
void Example::SetValue(int value) {
    value_ = value;
}

/**
 * 値を加える．
 * @param rhs 加算する値
 */
void Example::AddValue(int rhs) {
    value_ += rhs;
}

/*
 * 表示する．
 */
void Example::Show() const {
    std::cout << "name : " << name_ << "\n";
    std::cout << "value: " << value_ << "\n";
}

} // namespace example

