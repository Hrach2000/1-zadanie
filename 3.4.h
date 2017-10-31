#include <iostream>
using namespace std;
int C(int n,int k){
    if(n==k || k==0)
        return 1;
    return C(n-1,k)+C(n-1,k-1);
}
int main(){
    int n;
    cin>>n;
    for(int i=0;i<=n;i++)
        cout<<C(n,n-i)<<" ";
    return 0;
}