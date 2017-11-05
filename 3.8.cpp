#include <cmath>
#include <iostream>
using namespace std;
const float e = 1e-10;
float form(float x)
{
    return tan(x) - x;
}
float rek(float d, float y)
{
    float z = (d + y) / 2;    
    if(form(d) * form(z) < 0) 
        y = z;
    else 
        d = z;
    if(fabs(y - d) > e && form(z) != 0)
    {
        return rek(d, y);
    }
    else 
        return -1;
}
int main()
{
    float a, b;
    cin >> a >> b;
    cout << rek(a, b);
    return 0;
}