#include <iostream>
using namespace std;

int mult2(const int x=2)
{
    int i;
    int res=0;
    int k=1;
    
    for (i=1; i<=k; i++)
    {
        k++;
        res+=x;
        cout<<res<<"  ";
    }
    
    return res;
}


int main()
{
    mult2(2);
    return 0;
}
