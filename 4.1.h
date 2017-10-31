#include <iostream>
#include <algorithm>
using namespace std;
int n;
int uj[100002],qash[100002];
pair <int,int> p[100002];
int main(){
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>qash[i]>>uj[i];
        p[i]=make_pair(uj[i],qash[i]);
    }
    sort(p+1,p+n+1);
    for(int i=1;i<=n;i++){
        qash[i]=p[i].second;
        uj[i]=p[i].first;
    }
    int hqash=0,ans=0;
    for(int i=1;i<=n;i++){
        if(uj[i]>=hqash){
            hqash+=qash[i];
            ans++;
        }
    }
    cout<<ans<<endl;
    return 0;
}