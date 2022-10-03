/**
 * @file example.h
 * @brief サンプルクラスをもつヘッダファイル．
 */

#ifndef CPP_ENV_SAMPLE_EXAMPLE_H_
#define CPP_ENV_SAMPLE_EXAMPLE_H_

#include <iostream>
#include <string>

/**
 * @brief サンプル名前空間
 */
namespace example {

/**
 * @brief 名前と値をもつサンプルクラス．
 */
class Example {
public:
  /**
   * コンストラクタ．
   *
   * @param[in] name 名前
   * @param[in] value 値
   */
  Example(const std::string& name, int value);

  /**
   * デストラクタ．
   */
  virtual ~Example();

  /**
   * 名前を返す．
   *
   * @return 名前
   */
  std::string Name() const;

  /**
   * 値を返す．
   *
   * @return 値
   */
  int Value() const;

  /**
   * 名前を設定する．
   *
   * @param[in] name 名前
   */
  void SetName(const std::string& name);

  /**
   * 値を設定する．
   *
   * @param[in] value 値
   */
  void SetValue(int value);
  
  /**
   * 値を加える．
   *
   * @param[in] rhs 加算する値
   */
  void AddValue(int rhs);

  /**
   * 表示する．
   *
   * @param[in] out 出力ストリーム（省略時 std::cout）
   * @return 出力ストリームへの参照
   */
  std::ostream& Show(std::ostream& out = std::cout) const;

private:
  /** 名前 */
  std::string name_;

  /** 値 */
  int value_;
};

} // namespace example

#endif // CPP_ENV_SAMPLE_EXAMPLE_H_
