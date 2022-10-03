/**
 * @file example.cc
 * @brief サンプルクラスを定義するソースファイル．
 */

#include "cpp_env_sample/example.h"

/*
 * @brief サンプル名前空間
 */
namespace example {

/**
 * コンストラクタ．
 *
 * @param[in] name 名前
 * @param[in] value 値
 */
Example::Example(const std::string& name, int value) :
  name_(name), 
  value_(value) {}

/*
 * デストラクタ．
 */
Example::~Example() {
}

/**
 * 名前を返す．
 *
 * @return 名前
 */
std::string Example::Name() const {
  return name_;
}

/**
 * 値を返す．
 *
 * @return 値
 */
int Example::Value() const {
  return value_;
}

/**
 * 名前を設定する．
 *
 * @param[in] name 名前
 */
void Example::SetName(const std::string& name) {
  name_ = name;
}

/**
 * 値を設定する．
 *
 * @param[in] value 値
 */
void Example::SetValue(int value) {
  value_ = value;
}

/**
 * 値を加える．
 *
 * @param[in] rhs 加算する値
 */
void Example::AddValue(int rhs) {
  value_ += rhs;
}

/**
 * 表示する．
 *
 * @param[in] out 出力ストリーム（省略時 std::cout）
 * @return 出力ストリームへの参照
 */
std::ostream& Example::Show(std::ostream& out) const {
  out << "name : " << name_ << "\n";
  out << "value: " << value_ << "\n";
  return out;
}

} // namespace example

