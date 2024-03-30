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
    string s;
    cin>>s;

    ll n = s.size();
    ll ans = n+1;
    for(int i=0;i<=60;i++) {
        ll mn = LLONG_MAX;
        ll l1 = 0,l2 = 0;
        ll nn = (1ll<<i);
        string ss = to_string(nn);
        ll mct = 0;
        while(l1 < n && l2 < ss.size()) {
            if(s[l1] == ss[l2]) {
                l1++,l2++;
                mct++;
            }
            else l1++;
        }
        ans = min(ans, n-mct + ss.size()-mct);
    }

    cout<<ans<<endl;
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
