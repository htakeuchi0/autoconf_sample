/**
 * サンプルクラスを定義するソースファイル．
 */

#include "include/example.hpp"

namespace example {

/*
 * コンストラクタ．
 * @param[in] name 名前
 * @param[in] value 値
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

/*
 * 名前を返す．
 * @return std::string 名前
 */
std::string Example::Name() const {
    return name_;
}

/*
 * 値を返す．
 * @return int 値
 */
int Example::Value() const {
    return value_;
}

/*
 * 名前を設定する．
 * @param[in] name 名前
 */
void Example::SetName(std::string name) {
    name_ = name;
}

/*
 * 値を設定する．
 * @param[in] value 値
 */
void Example::SetValue(int value) {
    value_ = value;
}

/*
 * 値を加える．
 * @param[in] rhs 加算する値
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

