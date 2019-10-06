#include "include/example.hpp"

namespace example {

Example::Example(std::string name, int value) :
    name_(name), 
    value_(value) {
}

Example::~Example() {
}

std::string Example::Name() const {
    return name_;
}

int Example::Value() const {
    return value_;
}

void Example::SetName(std::string name) {
    name_ = name;
}

void Example::SetValue(int value) {
    value_ = value;
}

void Example::AddValue(int rhs) {
    value_ += rhs;
}

void Example::Show() const {
    std::cout << "name : " << name_ << "\n";
    std::cout << "value: " << value_ << "\n";
}

} // namespace example

