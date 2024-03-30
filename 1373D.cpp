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

    ll ans = 0;
    for(int i=0;i<n;i+=2) ans += a[i];

    ll mx1 = 0, mx2 = 0;
    ll sum = 0;
    for(int i=0;i<n-1;i+=2) {
        sum += (a[i+1]-a[i]);
        mx1 = max(mx1, sum);
        if(sum < 0) sum = 0;
    } 
    sum = 0;
    for(int i=1;i<n-1;i+=2) {
        sum += (a[i]-a[i+1]);
        mx2 = max(mx2, sum);
        if(sum<0) sum = 0;
    }

    cout<<ans + max(mx1, mx2)<<endl;
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
