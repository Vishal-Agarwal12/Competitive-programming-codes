#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n,m;
    cin>>n>>m;

    vector<int> a(n), b(m);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++) {
        cin >> b[i];
    }

    int xr = 0;
    for(auto x: a) xr^=x;
    int ca = 0,cb=0;

    if(n%2==0) {
        int val=0;
        for(int i=30;i>=0;i--) {
            ca = 0, cb = 0;
            for(auto x: a) {
                ca += (((1<<i)&x) > 0);
            }
            for(auto x: b) {
                cb += (((1<<i)&x) > 0);
            }
            if(ca%2 && !cb) {
                val+=(1<<i);
            }
        }
        cout<<val<<" "<<xr<<endl;
    }
    else {
        int val=0;
        for(int i=30;i>=0;i--) {
            ca = 0, cb = 0;
            for(auto x: a) {
                ca += (((1<<i)&x) > 0);
            }
            for(auto x: b) {
                cb += (((1<<i)&x) > 0);
            }
            if(ca%2 || cb) {
                val+=(1<<i);
            }
        }
        cout<<xr<<" "<<val<<endl;
    }
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}