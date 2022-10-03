/**
 * @file gtest_example.cc
 * @brief テストファイル．
 */

#include <gtest/gtest.h>
#include "cpp_env_sample/example.h"

namespace {

/**
 * @brief テストケースのサンプルクラス．
 */
class ExampleTest : public ::testing::Test {
protected:
  /**
   * 初期化する．
   */
  virtual void SetUp() {
    name_ = "name";
  }

protected:
  /** 名前の初期値 */
  std::string name_;
};

/*
 * example::Example::SetValue で値が設定できることを確認する．
 */
TEST_F(ExampleTest, SetValue) {
  example::Example obj(name_, 1);
  obj.SetValue(2);
  EXPECT_EQ(2, obj.Value());
}

/*
 * example::Example::AddValue で値が加算できることを確認する．
 */
TEST_F(ExampleTest, AddValue) {
  example::Example obj(name_, 1);
  obj.AddValue(2);
  EXPECT_EQ(3, obj.Value());
}

/*
 * example::Example::SetName で名前が設定できることを確認する．
 */
TEST_F(ExampleTest, SetName) {
  example::Example obj(name_, 1);
  obj.SetName("new name");
  EXPECT_EQ("new name", obj.Name());
}

/*
 * example::Example::Show で結果が表示されることを確認する．
 */
TEST_F(ExampleTest, Show) {
  example::Example obj(name_, 1);

  std::stringstream ss;
  obj.Show(ss);

  std::string str = ss.str();
  EXPECT_EQ("name : name\nvalue: 1\n", str);
}

} // namespace

