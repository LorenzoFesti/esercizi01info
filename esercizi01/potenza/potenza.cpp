#include <iostream>
using namespace std;

int powint (int x, int y);

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

