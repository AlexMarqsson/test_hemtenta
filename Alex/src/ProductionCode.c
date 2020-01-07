#include "ProductionCode.h"

// This function is supposed to search through NumbersToFind and find a particular number.  
// If it finds it, the index is returned.  Otherwise 0 is returned which sorta makes sense since 
// NumbersToFind is indexed from 1.  Unfortunately it's broken 
// (and should therefore be caught by our tests)

int SeeIfNumbersAreAdded(int nr_a, int nr_b)
{
    return nr_a+nr_b;
}
