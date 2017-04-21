#ifndef REDUCEGENERIC_H
#define REDUCEGENERIC_H
#include <vector>

class ReduceGeneric
{
public:
    ReduceGeneric();
    std::vector<int> reduce(std::vector<int> vec);
private:
    virtual int binaryOperator(int, int) = 0;//纯虚函数的声明方式
};

#endif // REDUCEGENERIC_H
