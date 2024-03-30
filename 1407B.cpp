#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#endif

using ll = long long;
using maxheap = priority_queue<ll>; // maxheap
using minheap = priority_queue<ll, vector<ll>, greater<ll>>; // minheap
#define all(a) (a).begin(), (a).end()
#define rall(a) (a).rbegin(), (a).rend()
#define sort_and_unique(a) \
    sort(all(a));          \
    (a).resize(unique(all(a)) - (a).begin())
#define minv(a) *min_element(all(a))
#define maxv(a) *max_element(all(a))
#define pb push_back
#define eb emplace_back
#define fi first
#define se second
#define ins insert
#define sz(x) ((int)(x).size())
#define pw(x) (1LL << (x))
#define setbits(x) __builtin_popcountll(x)
const ll Mod = 998244353;
const ll mod = 1e9 + 7;
const ll inf = 1e18;

void solve()
{
    ll n;
    cin>>n;
    ll a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    sort(a,a+n);
    reverse(a,a+n);

    vector<ll> v;
    v.pb(a[0]);

    vector<ll> vis(n,0);
    vis[0]=1;
    ll g = a[0];
    
    for(int i=0;i<n-1;i++) {
        ll mx=-1;
        for(int j=0;j<n;j++) {
            if(vis[j] == 0)
            mx = max(mx, __gcd(g, a[j]));
        }

        for(int j=0;j<n;j++) {
            if(vis[j] == 0 && __gcd(g, a[j]) == mx) {
                v.pb(a[j]);
                vis[j]=1;
                break;
            }
        }
        g = __gcd(g, v.back());
    }
    
    for(auto x: v) cout<<x<<" ";
    cout<<endl;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--)
        solve();

    return 0;
}
