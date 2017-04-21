#include "filternonpositive.h"

FilterNonPositive::FilterNonPositive()
{

}

bool FilterNonPositive::g(int num)//根据题意的描述直接写出这个函数
{
    if (num > 0)
        return false;
    else
        return true;
}
