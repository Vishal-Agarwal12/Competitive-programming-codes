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
    ll n,m;
    cin>>n>>m;
    string s;
    cin>>s;

    ll pre[n], suf[n];
    ll tp = 0;
    for(int i=0;i<n;i++) {
        if(s[i] == '0') tp = i;
        pre[i] = tp;
    }
    tp = n-1;
    for(int i=n-1;i>=0;i--) {
        if(s[i] == '1') tp=i;
        suf[i] = tp;
    }

    ll fg = 0;
    map<pair<ll,ll>, ll> mp;
    ll ans = 0;
    for(int i=0;i<m;i++) {
        ll l,r;
        cin>>l>>r;
        l--,r--;

        if(l==r) {
            fg = 1;
            continue;
        }
        ll newl = suf[l];
        if(newl >= r) {
            fg = 1;
            continue;
        }
        ll newr = pre[r];
        if(newr <= newl) {
            fg = 1;
            continue;
        }

        if(mp[{newl, newr}] == 0) {
            mp[{newl, newr}] = 1;
            ans++;
        }
    }
    // cout<<mp;
    cout<<ans + fg<<endl;
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
