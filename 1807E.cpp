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
    ll a[n+1];
    for(int i=1;i<=n;i++) cin>>a[i];

    ll p[n+1];
    for(int i=1;i<=n;i++) p[i] = p[i-1] + a[i];

    ll l = 1, r = n, ans = 0;
    while(l<=r) {
        ll mid = (l+r)/2;
        cout<<"? "<<(mid-l+1)<<" ";
        for(int i=l;i<=mid;i++) {
            cout<<i<<" ";
        }
        cout<<endl<<flush;

        ll x;
        cin>>x;
        if(x == p[mid] - p[l-1]) l=mid+1;
        else {
            ans = mid;
            r=mid-1;
        }
    }
    cout<<"! "<<ans<<endl<<flush;
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
