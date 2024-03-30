#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
    ll n,d,k;
    cin>>n>>d>>k;

    vector<ll> a(n,0);
    ll x = d%n;
    v[0]=1;
    for(int i=0;i<n;i++) {
        if(v[x]!=1) {
            v[x]=1;
            k--;
        }
        else if(v[x]==1) {
            x=(x+1)%n;
        }
    }
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin>>t;
    while(t--) 
        solve();

    return 0;
}

