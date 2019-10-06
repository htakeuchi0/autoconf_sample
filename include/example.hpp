/**
 * @file example.hpp
 * @brief サンプルクラスをもつヘッダファイル．
 */

#ifndef CPP_SAMPLE_EXAMPLE_H_
#define CPP_SAMPLE_EXAMPLE_H_

#include <iostream>
#include <string>

/**
 * サンプル名前空間
 */
namespace example {

/**
 * 名前と値をもつサンプルクラス．
 */
class Example {
public:
    /**
     * コンストラクタ．
     * @param name 名前
     * @param value 値
     */
    Example(std::string name, int value);

    /**
     * デストラクタ．
     */
    virtual ~Example();

    /**
     * 名前を返す．
     * @return 名前
     */
    std::string Name() const;

    /**
     * 値を返す．
     * @return 値
     */
    int Value() const;

    /**
     * 名前を設定する．
     * @param name 名前
     */
    void SetName(std::string name);

    /**
     * 値を設定する．
     * @param value 値
     */
    void SetValue(int value);
    
    /**
     * 値を加える．
     * @param rhs 加算する値
     */
    void AddValue(int rhs);

    /**
     * 表示する．
     */
    void Show() const;

private:
    /// 名前
    std::string name_;

    /// 値
    int value_;
};

} // namespace example

#endif // CPP_SAMPLE_EXAMPLE_H_
