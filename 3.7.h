#include <iostream>
using namespace std;
int main(){
    int v[100002];
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=n;i++)
        v[i-1]=i;
    int pntr=0;
    while(n){
        pntr=(pntr+m-1)%n;
        if(n<=3)
            cout<<v[pntr]<<" ";
        for(int i=pntr;i<n;i++)
            v[i]=v[i+1];
        n--;
    }
    return 0;
}