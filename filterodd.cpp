#include "filterodd.h"

FilterOdd::FilterOdd()
{

}

bool FilterOdd::g(int num)//根据题意的描述直接写出这个函数
{
    if (num % 2 == 1)
        return true;
    else
        return false;
}
