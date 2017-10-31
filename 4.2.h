#include <iostream>
#include <algorithm>
using namespace std;
int n;
int x[100002],y[100002],nx[100002],ny[100002];
pair <int,int> p[100002];
int main(){
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x[i]>>y[i];
        p[i]=make_pair(x[i],y[i]);
    }
    sort(p,p+n);
    x[0]=p[0].first;
    y[0]=p[0].second;
    int m=1;
    for(int i=1;i<n;i++){
        if(m==0 || p[i].second>y[m-1]){
            y[m]=p[i].second;
            x[m]=p[i].first;
            m++;
        }
    }
    int hima=-1,ans=0,k=10;
    while(hima<10000 && k--){
        int* it=upper_bound(x,x+m,hima+1);
        int qan=(it-x-1);
        ans++;
        hima=y[qan];
    }
    cout<<ans<<endl;
    return 0;
}