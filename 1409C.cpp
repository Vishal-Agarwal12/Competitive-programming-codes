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
    ll n,x,y;
    cin>>n>>x>>y;

    ll d = y-x, ans = 0, num=0;
    for(ll i=n-2;i>=0;i--) {
        ll div = i+1;
        if(d%div == 0) {
            ans = d/div;
            num = i;
            break;
        }
    }

    vector<ll> v;
    for(ll i=x ;i<=y;i+=ans) {
        v.pb(i);
    }

    ll nn = n-v.size();
    for(ll i=x-ans;i>0;i-=ans) {
        if(nn) {
            v.pb(i);
            nn--;
        }
    }

    for(ll i=y+ans;i<1e9;i+=ans) {
        if(nn) {
            v.pb(i);
            nn--;
        }
        else break;
    }
    sort(all(v));
    for(auto x: v) {
        cout<<x<<" ";
    }
    cout<<endl;
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
