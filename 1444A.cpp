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
    ll p,q;
    cin>>p>>q;

    ll q1  = q;
    if(p%q!=0) {
        cout<<p<<endl;
        return;
    }

    set<ll> s;
    for(ll i=2;i*i<=q;i++) {
        while(q%i==0) {
            s.insert(i);
            q/=i;
        }
    }
    if(q > 1) s.insert(q);

    ll ans = 1;
    for(auto x: s) {
        ll tmp = p;
        while(tmp%q1 == 0) {
            tmp/=x;
        }
        ans = max(ans, tmp);
    }

    cout<<ans<<endl;
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