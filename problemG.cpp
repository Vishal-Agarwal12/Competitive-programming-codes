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
    ll n, k, s;
    cin>>n>>k>>s;

    vector<ll> a(n);
    for(int i=0;i<n;i++) {
        cin>>a[i];
    }

    sort(all(a));
    ll l = 0, r=a[n-1];

    auto check = [&](ll m) -> bool {
        ll bus = 0;
        ll ss = 0;
        ll wt = 0;

        for(int i=0;i<n;i++) {
            if(ss == 0) {
                bus++;
                ss++;
                wt = a[i];
            }
            else {
                if(a[i] - wt <= m) {
                    ss++;
                    if(ss == s) {
                        ss = 0;
                    }
                }
                else {
                    bus++;
                    ss = 1;
                    wt = a[i];
                }
            }
        }
        return bus<=k;
    };

    ll ans = r;
    while(l<=r) {
        ll mid = (l+r)/2;
        if(check(mid)) {
            ans = mid;
            r = mid-1;
        }
        else l = mid+1;
    }
    cout<<ans<<nl;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    //freopen("input.txt", "rt", stdin);
    //freopen("output.txt", "wt", stdout);

    solve();

    return 0;
}
