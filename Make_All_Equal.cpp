#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
    int t;
    cin >> t;
    while (t--) {
        ll n,m;
        cin>>n>>m;

        ll a[n];
        for(int i=0;i<n;i++) {
            cin>>a[i];
        }

        sort(a,a+n);
        ll s = 0;
        for(int i=0;i<n;i++) {
            s += (a[n-1] - a[i]);
        }

        if(s%2) cout<<(s+1)/m<<endl;
        else cout<<(s)/m<<endl;
    }
    


}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();

    return 0;
}