#include "potenzasplit.hpp"

int powint(int x, int y)
{
    int result=1;
    int i;
    for(i=1; i<=y; i++)
    {
        result=result*x;
    }
    return result;
}
