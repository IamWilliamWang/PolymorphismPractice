#ifndef FILTERFORTWODIGITPOSITIVE_H
#define FILTERFORTWODIGITPOSITIVE_H
#include "filtergeneric.h"

class FilterForTwoDigitPositive : public FilterGeneric
{
public:
    FilterForTwoDigitPositive();
private:
    bool g(int num);
};

#endif // FILTERFORTWODIGITPOSITIVE_H
