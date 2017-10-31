#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int x1,x2,x3,x4,y1,y2,y3,y4,a,b,c;
    double s;
    cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4;
    a = pow((x2-x1),2) + pow((y2-y1),2);
    b = pow((x3-x1),2) + pow((y3-y1),2);
    c = pow((x4-x1),2) + pow((y4-y1),2);
    if(a+b==c)
    {
        s = sqrt(a*b);
        cout<<s;
    }
    else if(a+c==b)
    {
        s = sqrt(a*c);
        cout<<s;
    }
    else if(c+b==a)
    {
        s = sqrt(c*b);
       cout<<s;
    }
    return 0;
}