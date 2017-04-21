#ifndef MAPGENERIC_H
#define MAPGENERIC_H
#include <deque>
class MapGeneric
{
public:
    MapGeneric();

    std::deque<int> map(std::deque<int> deq);

private:
    virtual int f(int) = 0;//纯虚函数的声明方式
};

#endif // MAPGENERIC_H
