#include <iostream>
using namespace std;
int main()
{
    int n,a[1000000],x=0;
    cin>>n;
    for(int i = 0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]>x)
        x=a[i];  
    }
    cout<<x;
    return 0;
}