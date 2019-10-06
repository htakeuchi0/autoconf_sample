/**
 * サンプルクラスをもつヘッダファイル．
 */

#ifndef CPP_SAMPLE_EXAMPLE_H_
#define CPP_SAMPLE_EXAMPLE_H_

#include <iostream>
#include <string>

namespace example {

/**
 * 名前と値をもつサンプルクラス．
 */
class Example {
public:
    /**
     * コンストラクタ．
     * @param[in] name 名前
     * @param[in] value 値
     */
    Example(std::string name, int value);

    /**
     * デストラクタ．
     */
    virtual ~Example();

    /**
     * 名前を返す．
     * @return std::string 名前
     */
    std::string Name() const;

    /**
     * 値を返す．
     * @return int 値
     */
    int Value() const;

    /**
     * 名前を設定する．
     * @param[in] name 名前
     */
    void SetName(std::string name);

    /**
     * 値を設定する．
     * @param[in] value 値
     */
    void SetValue(int value);
    
    /**
     * 値を加える．
     * @param[in] rhs 加算する値
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
