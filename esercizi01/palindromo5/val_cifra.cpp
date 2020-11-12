#include "val_cifra.hpp"
#include "pow10.hpp"

int val_cifra(int num, int y)
{
    int val;
    int divis = num/pow10((y-1));
    val = divis%pow10(1);

    return val;
}
