// funzione che calcola il valore della potenza di 10

#include "pow10.hpp"

int pow10 (int x)
{
    int i;
    int result=1;
    if(x==0)
    {
        result=1;
    }
    for (i=1; i<=x; i++)
    {
        result*=10;
    }
    return result;
}

