#ifndef REDUCEGCD_H
#define REDUCEGCD_H
#include "reducegeneric.h"

class ReduceGCD : public ReduceGeneric
{
public:
    ReduceGCD();
private:
    int binaryOperator(int num1, int num2);
};

#endif // REDUCEGCD_H
