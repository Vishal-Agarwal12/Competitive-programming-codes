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
    ll c1 = 0, c2 = 0, c3 = 0;

    cout<<"? "<<1<<" "<<2<<endl;
    cin>>c1;
    cout<<"? "<<1<<" "<<3<<endl;
    cin>>c2;
    cout<<"? "<<2<<" "<<3<<endl;
    cin>>c3;

    a[0] = (c1+c2-c3)/2;
    a[1] = (c1+c3-c2)/2;
    a[2] = (c2+c3-c1)/2;

    ll x;
    for(int i=3;i<n;i++) {
        cout<<"? "<<i<<" "<<i+1<<endl;
        cin>>x;
        a[i] = x - a[i-1];
    }

    cout<<"! ";
    for(auto y: a) {
        cout<<y<<" ";
    }
    cout<<endl;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}