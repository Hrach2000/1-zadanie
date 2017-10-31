#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n, i;
    bool x = true;
    cin>>n;
    
    for (i=2; i<=(sqrt(abs(n))); i++){
        if (n%i==0)
        {
        x = false;
        break;
        }
    }
 cout<<x;
}