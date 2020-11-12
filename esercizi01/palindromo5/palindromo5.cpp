#include <iostream>
#include "val_cifra.hpp"
#include "pow10.hpp"
using namespace std;

int main()
{
    int n;
    cout<<"inserisci un numero di 5 cifre"<<endl;
    cin>>n;

    if ((val_cifra(n,1) == val_cifra(n,5)) & (val_cifra(n,2) == val_cifra(n,4)))
    {
        cout<< "il numero è palindromo";
    }
    else
    {
        cout<<"il numero non è palindromo";
    }
    return 0;
}

