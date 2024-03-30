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

    vector<pair<ll, pair<ll, ll>>> v1, v2, v3;
    for(int i=0;i<n;i++) {
        ll t, a, b;
        cin>>t>>a>>b;
        if(a==1 && b==1) v1.pb({t, {a,b}});
        else if(a==1) v2.pb({t, {a,b}});
        else if(b==1) v3.pb({t, {a,b}});
    }

    sort(all(v1));
    sort(all(v2));
    sort(all(v3));
    vector<ll> ans;
    for(int i=0;i<min(v2.size(), v3.size());i++) {
        ans.pb(v2[i].fi + v3[i].fi);
    }

    for(int i=0;i<v1.size();i++) {
        ans.pb(v1[i].fi);
    }

    sort(all(ans));
    if(ans.size() < k) {
        cout<<-1<<endl;
        return;
    }

    ll res = 0;
    for(int i=0;i<k;i++) res+=ans[i];

    cout<<res<<endl;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
