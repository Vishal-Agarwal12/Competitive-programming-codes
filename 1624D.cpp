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
    ll n, k;
    cin>>n>>k;
    string s;
    cin>>s;

    map<char, ll> mp;
    for(auto x: s) mp[x]++;

    ll p = 0, f = 0;
    // cout<<mp;
    for(auto x: mp) {
        p += x.second/2;
        f += x.second%2;
    }

    ll tg = p/k;
    if(tg == 0) {
        cout<<1<<endl;
        return;
    }
    vector<ll> v;
    for(int i=0;i<k;i++) {
        v.pb(tg*2);
    }

    sort(all(v));
    ll lft = p-tg*k;
    if(f + lft*2 < k) {
        cout<<v[0]<<endl;
    }
    else cout<<v[0]+1<<endl;
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
