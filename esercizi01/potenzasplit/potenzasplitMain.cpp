#include <iostream>
#include "potenzasplit.hpp"
using namespace std;

int main()
{
    int a, b;
    cout << "inserisci la base"<< endl;
    cin >>a;
    cout << "inserisci l'esponente"<<endl;
    cin>>b;
    cout << "il risultato della potenza è: "<< powint(a,b);
    return 0;
}
