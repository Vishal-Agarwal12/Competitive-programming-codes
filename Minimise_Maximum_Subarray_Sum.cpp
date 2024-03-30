#include <bits/stdc++.h>
#define pb(x) push_back(x)
using namespace std;
using ll = long long;

void solve()
{
    ll x,y;
    cin>>x>>y;

    vector<ll> v;
    if(x <= y) {
        cout<<1<<endl;
        return;
    }
    if(x-y==1 || x==y) {
        cout<<1<<endl;
        return;
    }
    if(x/(y+1) == 1) {
        cout<<2<<endl;
        return;
    }

    ll tmp = x/(y+1);
    ll ext = x - 2*(y+1);
    // cout<<tmp<<" "<<ext<<endl;
    for(int i=1;i<=x-ext-1;i++) {
        v.pb(1);
        if(i%tmp == 0) {
            if(ext) {
                v.pb(1);
                ext--;
            }
            v.pb(-2);
        }
    }
    for(auto x: v) cout<<x<<" ";
    cout<<endl;

    ll ans = 0, sum = 0;
    for(int i=0;i<v.size();i++) {
        sum+=v[i];
        ans = max(ans, sum);
        if(sum<0) sum = 0;
    }
    cout<<ans<<endl;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) solve();

    return 0;
}