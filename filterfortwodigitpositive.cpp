#include "filterfortwodigitpositive.h"

FilterForTwoDigitPositive::FilterForTwoDigitPositive()
{

}

bool FilterForTwoDigitPositive::g(int num)//根据题意的描述直接写出这个函数
{
    if (num >= 10 && num <= 99)
        return true;
    else
        return false;
}
