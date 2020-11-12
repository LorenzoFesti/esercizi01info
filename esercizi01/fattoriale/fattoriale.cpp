#include <iostream>
#include "fact.hpp"
using namespace std;

int main()
{
   int num;
    cout<<"Inserisci un numero di cui si vuole calcolare il fattoriale. Inserire un numero minore o uguale a 25, altrimenti il risultato ottenuto sarà errato"<<endl;
    cin>>num;
    
    cout<<"il fattoriale del numero inserito è: "<<fact(num)<<endl;
    
    return 0;
}
