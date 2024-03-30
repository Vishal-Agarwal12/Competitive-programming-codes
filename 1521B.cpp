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
    vector<ll> a(n);
    for(int i=0;i<n;i++) cin>>a[i];

    vector<pair<ll,ll>> vv1, vv2;
    ll mn = minv(a), pos = -1;
    for(int i=0;i<n;i++) {
        if(a[i] == mn) {
            pos = i;
            break;
        }
    }   

    ll tmp = mn+1;
    for(int i=pos+1;i<n;i++) {
        vv1.pb({pos+1, i+1});
        vv2.pb({mn, tmp});
        tmp++;
    }

    mn = minv(a);
    tmp = mn+1;
    for(int i=pos-1;i>=0;i--) {
        vv1.pb({i+1, pos+1});
        vv2.pb({tmp ,mn});
        tmp++;
    }

    cout<<vv1.size()<<endl;
    for(int i=0;i<vv1.size();i++) {
        cout<<vv1[i].fi<<" "<<vv1[i].se<<" "<<vv2[i].fi<<" "<<vv2[i].se<<endl;
    }
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
