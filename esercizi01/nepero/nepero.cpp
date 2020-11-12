#include <iostream>
using namespace std;

double fact(double x)
{
    double res=1.0;
    int i;
    
    for(i=1; i<=x; i++)
    {
        res=res*i;
    }
    
    return res;
}

double nepero(int y)
{
    double nepero = 1.0;
    double k;
    
    for(k=1.0; k<=y; k++)
    {
        nepero = nepero + (1/fact(k));
    }
    
    return nepero;
}

int main()
{
    int num;
    cout<<"Il programma calcola il numero di Nepero. Inserire un numero per approssimare il risultato (più il numero è alto, più il numero ottenuto si avvicinerà al numero di Nepero)"<<endl;
    cin>>num;
    cout<<"Il numero di Nepero è: e = "<< nepero(num);
    
    return 0;
}
