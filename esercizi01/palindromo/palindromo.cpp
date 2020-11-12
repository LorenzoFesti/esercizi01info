#include <iostream>
#include <cmath>
using namespace std;

int pow10(int x)
{
    int result=1;
    int i;
    if (x==0)
    {
        result=1;
    }
    for (i=1; i<=x; i++)
    {
        result=result*10;
    }
    return result;
}

int val_cifra(int num, int y)
{
    int val;
    int divis = num/pow10((y-1));
    val = divis%pow10(1);

    return val;
}

int main ()
{
    int n;
    cout<<"inserisci un numero"<<endl;
    cin>>n;

    int ncifre;
    ncifre=log10(n)+1;

    if (ncifre % 2 == 0)
    {
        cout<< "il numero non è palindromo";
    }
    if (ncifre % 2 != 0)
    {
        int k=1;
        while (k<(ncifre/2))
        {
            if((val_cifra(n,k)) == (val_cifra(n,ncifre-(k-1))))
            {
                k++;
            }
        }
        cout<<"il numero è palindromo";
    }
    return 0;
}



