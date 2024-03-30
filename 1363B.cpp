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
    if(n==1 || n==2) {
        cout<<0<<endl;
        return;
    }

    ll ans = n;
    ll zf[n], zb[n], onf[n], onb[n];
    for(int i=0;i<n;i++) {
        zf[i] = (s[i] == '0');
        if(i!=0) zf[i] += zf[i-1];
        onf[i] = (s[i] == '1');
        if(i!=0) onf[i] += onf[i-1];
    }

    for(int i=n-1;i>=0;i--) {
        zb[i] = (s[i] == '0');
        onb[i] = (s[i] == '1');
        if(i!=n-1) {
            zb[i] += zb[i+1];
            onb[i] += onb[i+1];
        }
    }

    for(int i=0;i<n-1;i++) {
        if(s[i] == '0' && s[i+1] == '1') {
            ans = min(ans, onf[i] + zb[i+1]);
        }
        else if(s[i] == '1' && s[i+1] == '0') {
            ans = min(ans, zf[i] + onb[i+1]);
        }
    }
    ans = min(ans, min(onf[n-1], zf[n-1]));

    if(ans == n) cout<<0<<endl;
    else cout<<ans<<endl;
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
