#include <iostream>
using namespace std;

int main()
{
    int n,f1=1,f2=1;
    cin>>n;
    for(int i=2;i<n;i++)
    {
        f2 = f2 + f1;
        f1 = f2 - f1;
    }
    cout<<f2;
    return 0;
}
