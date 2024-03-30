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
    cin >> n;

    ll n1 = n;
    vector<pair<ll, ll>> v;
    for (ll i = 2; i * i <= n; i++) {
        ll c = 0;
        while (n % i == 0) {
            n /= i;
            c++;
        }
        v.pb({c, i});
    }
    if (n > 1)
        v.pb({1, n});

    sort(rall(v));
    ll mx = v[0].first;
    ll val = v[0].second;

    ll ans = 1;
    cout<<mx<<endl;
    for(int i = 0; i < mx-1; i++) {
        ans *= val;
        cout << val << " ";
    }
    cout << n1 / ans << endl;
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
