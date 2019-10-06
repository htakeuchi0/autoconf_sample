#include "gtest/gtest.h"
#include "include/example.hpp"

namespace {

/**
 * テストケースのサンプルクラス．
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
    /// 名前の初期値
    std::string name_;
};

/*
 * example::Example::AddValueが正しく加算できることを確認する．
 */
TEST_F(ExampleTest, AddValue) {
    example::Example obj(name_, 1);
    obj.AddValue(2);
    EXPECT_EQ(3, obj.Value());
}

} // namespace


