#ifndef CPP_SAMPLE_EXAMPLE_H_
#define CPP_SAMPLE_EXAMPLE_H_

#include <iostream>
#include <string>

namespace example {

class Example {
public:
    Example(std::string name, int value);
    virtual ~Example();
    std::string Name() const;
    int Value() const;
    void SetName(std::string name);
    void SetValue(int value);
    void AddValue(int rhs);
    void Show() const;

private:
    std::string name_;
    int value_;
};

} // namespace example

#endif // CPP_SAMPLE_EXAMPLE_H_
