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
    if(n<=3) {
        cout<<-1<<endl;
        return;
    }
    vector<ll> v1, v2;
    for(int i=1;i<=n;i+=2) v1.pb(i);
    for(int i=2;i<=n;i+=2) v2.pb(i);
    swap(v2[0], v2[1]);

    sort(rall(v1));
    for(auto x: v1) cout<<x<<" ";
    for(auto x: v2) cout<<x<<" ";
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