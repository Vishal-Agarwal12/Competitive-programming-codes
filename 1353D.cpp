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

    set<pair<ll, pair<ll, ll>>> s;
    s.ins({-n, {1, n}});
    vector<ll> v(n);

    ll tmp = 0;
    while(!s.empty()) {
        tmp++;
        auto ss = *s.begin();
        s.erase(ss);

        ll l = ss.se.fi, r = ss.se.se;
        ll mid = (l+r)/2;
        v[mid-1] = tmp;
        if(l<mid) s.ins({l-mid, {l, mid-1}});
        if(mid<r) s.ins({mid-r, {mid+1, r}});
    }
    for(auto x: v) cout<<x<<" ";
    cout<<endl; 
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin>>T;
    while(T--)
        solve();

    return 0;
}
