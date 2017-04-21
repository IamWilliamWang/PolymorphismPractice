#ifndef REDUCEMINIMUM_H
#define REDUCEMINIMUM_H
#include "reducegeneric.h"

class ReduceMinimum : public ReduceGeneric
{
public:
    ReduceMinimum();
private:
    int binaryOperator(int num1, int num2);
};

#endif // REDUCEMINIMUM_H
