#include "reduceminimum.h"

ReduceMinimum::ReduceMinimum()
{

}

int ReduceMinimum::binaryOperator(int num1, int num2)//根据题意的描述直接写出这个函数
{
    return num1 < num2 ? num1 : num2;
}
