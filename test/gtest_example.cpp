#include "gtest/gtest.h"
#include "include/example.hpp"

namespace {

class ExampleTest : public ::testing::Test {
protected:
    virtual void SetUp() {
        name_ = "name";
    }

protected:
    std::string name_;
};

TEST_F(ExampleTest, AddValue) {
    example::Example obj(name_, 1);
    obj.AddValue(2);
    EXPECT_EQ(3, obj.Value());
}

} // namespace


