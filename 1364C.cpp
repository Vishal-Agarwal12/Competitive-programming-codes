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

    set<ll> s,st;
    for(auto x: a) st.ins(x);

    ll i = 0;
    while(true) {
        if(s.size() == n) break;
        if(st.count(i)) {
            i++;
        }
        else s.insert(i), i++;
    }

    vector<ll> v;
    for(int i=0;i<n;i++) {
        if(i==0 || a[i] == a[i-1]) {
            v.pb(*s.begin());
            s.erase(*s.begin());
        }
        else if(a[i] != a[i-1]) {
            v.pb(a[i-1]);
        }
    }
    for(auto x: v) cout<<x<<" ";
    cout<<endl;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
