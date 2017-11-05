#include <iostream>
#include <cmath>

using namespace std;
int main()
{
    int x1,y1,x2,y2,n,i,j,nx,ny,l1,l2,xx,yy,mm,x[1000002],y[1000002],m[1000002];
    cin>>x1>>y1>>x2>>y2>>n;

    for(i=1;i<=n;i++)
    {
        cin>>x[i]>>y[i];
        m[i] = i;
    }

    for(i=1;i<=n;i++)
    {
        nx = x[i];
        ny = y[i];
        l1 = pow((nx - x1), 2) + pow((ny - y1), 2);
        for(j=i+1;j<=n;j++)
        {
            l2 = pow((x[j] - x1), 2) + pow((y[j] - y1), 2);
            if(l2<l1)
            {
                xx = x[i];
                x[i] = x[j];
                x[j] = xx;
                nx = x[i];

                yy = y[i];
                y[i] = y[j];
                y[j] = yy;
                ny = y[i];

                mm = m[i];
                m[i] = m[j];
                m[j] = mm;

                l1 = l2;
            }
        }
        x1 = x[i];
        y1 = y[i];
    }
    for(i=1;i<=n;i++)
    {
       cout<<m[i]<<"  ";
    }

    return 0;
}