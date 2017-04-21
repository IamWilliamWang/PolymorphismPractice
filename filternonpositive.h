#ifndef FILTERNONPOSITIVE_H
#define FILTERNONPOSITIVE_H
#include "filtergeneric.h"

class FilterNonPositive : public FilterGeneric
{
public:
    FilterNonPositive();
private:
    bool g(int num);
};

#endif // FILTERNONPOSITIVE_H
