#ifndef FILTERGENERIC_H
#define FILTERGENERIC_H
#include <deque>

class FilterGeneric
{
public:
    FilterGeneric();
    std::deque<int> filter(std::deque<int> deq);
private:
    virtual bool g(int) = 0;//纯虚函数的声明方式
};

#endif // FILTERGENERIC_H
