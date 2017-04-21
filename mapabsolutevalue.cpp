#include "mapabsolutevalue.h"

MapAbsoluteValue::MapAbsoluteValue()
{

}

int MapAbsoluteValue::f(int num)//根据题意的描述直接写出这个函数
{
    return num >= 0 ? num : -num;
}
