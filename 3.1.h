#include <iostream>

using namespace std;

int main()
{
     int a,n,x=0;
 cin>>n;
 for(int i = 0;i<n;i++)
 {
     cin>>a;
     if(a>x)
     x=a;
 }
 cout<<x;
 return 0;
}
