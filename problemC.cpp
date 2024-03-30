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
    ll n, m;
    cin>>n>>m;
    vector<ll> a(n), b(m);
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<m;i++) cin>>b[i];

    ll a1 = 0, a2 = 0;
    sort(all(a));
    sort(all(b));
    for(int i=0;i<n;i++) {
        auto it = upper_bound(all(b),a[i]-1) - b.begin();
        a1 = (a1+it)%Mod;
    }
    for(int i=0;i<m;i++) {
        auto it = upper_bound(all(a),b[i]-1) - a.begin();
        a2 = (a2+it)%Mod;
    }
    cout<<a1<<" "<<a2<<endl;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
