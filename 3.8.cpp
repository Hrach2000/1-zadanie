#include <cmath>
#include <iostream>
#include <cstdio>
#include <iomanip>
using namespace std;

double func(double x)
{
    return tan(x)-x;
}
int main()
{

    const double eps = 0.0000000001;
    double a, b, t, f1, f2, f3, x = 0;
    cin >> a >> b;
    if(func(a) * func(b) <= 0 )
    {
        do
        {
            t = ( a + b ) / 2;
            f1 = func( a );
            f2 = func( b );
            f3 = func( t );
            if( f1 * f3 <= 0)
                b = t;

            if( f2 * f3 <= 0 )
                a = t;
            x++;
        }
        while(fabs(f3) >= eps);
        cout << setprecision(12) << t << " " << x;
    }
    else
        cout << -1;


    return 0;
}
