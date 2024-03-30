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
#define nl '\n'
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
    ll a, b, r;
    cin>>a>>b>>r;

    ll x = r, ans = abs((a-b));
    if(a<b) swap(a,b);
    ll fg = 0, c = 0;
    for(int i=61;i>=0;i--) {
        if(((a & (1ll<<i)) > 0) && ((b & (1ll<<i)) == 0)) {
            c++;
            if(c > 1 && r>= (1ll<<i)) {
                a-= (1ll<<i);
                b+= (1ll<<i);
                ans = min(ans, abs(a-b));
                // cout<<ans<<nl;
                r -= (1ll<<i);
            }
        }
    }

    cout<<ans<<nl;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    //freopen("input.txt", "rt", stdin);
    //freopen("output.txt", "wt", stdout);

    int T;
    cin>>T;
    while(T--)
        solve();

    return 0;
}
