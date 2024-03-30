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
    ll a,b,c;
    cin>>a>>b>>c;

    vector<ll> p = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29,31, 37, 41, 43, 47, 53, 59, 61, 67, 71};
    
    ll a1 = 1, b1 = 1, c1 = 1, j = 1;
    for(int i=0;i<a-c;i++) {
        a1 *= p[j];
        j++;
    }
    for(int i=0;i<b-c;i++) {
        b1 *= p[j];
        j++;
    }
    for(int i=0;i<c;i++) {
        c1*=2;
    }
    a1*=c1;
    b1*=c1;

    cout<<a1<<" "<<b1<<" "<<c1<<endl;
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