#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n, q;
    cin>>n>>q;

    ll i=1;
    set<ll> s;
    while(q--) {
        ll x; cin>>x;
        if(x==1) {
            s.insert(i);
            i++;
        }
        else if(x==2) {
            ll y; cin>>y;
            s.erase(y);
        }
        else {
            cout<<*s.begin()<<endl;
        }

    }
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
