#include <iostream>
#include <algorithm>
using namespace std;

pair <int, int> p[100002];
int main()
{
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        cin >> p[i].second >> p[i].first ;
    }
    sort(p + 1, p + n + 1);
    int hqash = 0, ans = 0;
    for(int i = 1; i <= n; i++)
    {
        if(p[i].first >= hqash)
        {
            hqash += p[i].second;
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}
