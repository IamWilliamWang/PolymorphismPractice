#ifndef FILTERODD_H
#define FILTERODD_H
#include "filtergeneric.h"

class FilterOdd : public FilterGeneric
{
public:
    FilterOdd();
private:
    bool g(int num);
};

#endif // FILTERODD_H
