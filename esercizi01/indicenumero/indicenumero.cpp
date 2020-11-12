/* this program splits a number into digits */

#include <iostream>
#include <cmath>
#include "pow10.hpp"
using namespace std;


int main()
{
    int num;
    cout<<"inserisci un numero"<<endl;
    cin>>num;

    int ncifre;
    ncifre = log10(num)+1;
    int k;
    int val;
    
    for (k=0; k<ncifre; k++)
    {
        if (k==0)
        {
            val=num%pow10(1);
            cout<<" indice "<<(k+1)<<" = "<<val;
        }
        if(k>=1)
        {
            int m;
            m=num/pow10(k);
            val=m%pow10(1);
            cout<<" indice "<<(k+1)<<" = "<<val;
        }
    }
    return  0;
}
