#include "fact.hpp"

long long fact(int x)
{
    long long res=1;
    int i;
    
    for(i=1; i<=x; i++)
    {
        res=res*i;
    }
    
    return res;
}
