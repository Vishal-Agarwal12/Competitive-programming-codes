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
    ll n,k,d;
    cin>>n>>k>>d;

    ll a[n],b[k];
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<k;i++) cin>>b[i];

    
    ll cnt = 0;
    for(int i=0;i<n;i++) {
        if(a[i] == i+1) cnt++;
    }   
    ll mx = cnt + (d-1)/2;

    for(int i=0;i<k-1;i++) {
        ll c = 0;
        for(int j=0;j<b[i];j++) {
            a[j]++;
        }
        for(int j=0;j<n;j++) {
            if(a[j] == j+1) c++;
        }
        if((d-(i+2))/2 < 0) break;
        mx = max(mx, c + abs((d-(i+2))/2));
    }

    cout<<mx<<endl;
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
