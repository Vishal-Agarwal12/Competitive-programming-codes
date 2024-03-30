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
const ll mod = 998244353;

void solve()
{
    ll n, m;
    cin>>n>>m;

    if(n>m) swap(n,m);
    ll ans = 0;

    if(n==1) {
        if(m%2==0) {
            ans = (ans+ m/2)%mod;
            ans = (ans + m/2+1)%mod;
        }
        else ans = (ans + m/2+1)%mod;
    }
    else if(n==m && n%2==0 && m%2==0) {
        ans = (ans +  (n/2)*(m/2))%mod;
        ans = (ans + (n/2)*(m/2+1))%mod;
        ans = (ans + (n/2+1)*(m/2))%mod;
        ans = (ans + (n/2+1)*(m/2+1))%mod;
    }
    else if(n%2==0 && m%2==0) {
        ans = (ans+ ((m/2)*((n*(n+1)/2)))%mod)%mod;
        ans = (ans+ ((m/2+1)*((n*(n+1)/2)))%mod)%mod;
    }
    else if(n%2==1 && m%2==0) {
        ans = (ans +  (n/2)*(m/2))%mod;
        ans = (ans +  (n/2+1)*(m/2))%mod;
        ans = (ans +  (n/2+2)*(m/2))%mod;
        ans = (ans +  (n/2)*(m/2+1))%mod;
        ans = (ans +  (n/2+1)*(m/2+1))%mod;
        ans = (ans +  (n/2+2)*(m/2+1))%mod;
    }  
    else if(n==m && n%2==1 && m%2==1) {
        ans = (ans + (n/2+1)*(m/2+1))%mod;
    }
    else if(n%2==1 && m%2==1) {
        ans = (ans +  (n/2)*(m/2+1))%mod;
        ans = (ans +  (n/2+1)*(m/2+1))%mod;
        ans = (ans +  (n/2+2)*(m/2+1))%mod;
    }
    else if(n%2==0 && m%2==1) {
        ans = (ans + (n/2)*(m/2+1))%mod;
        ans = (ans + (n/2+1)*(m/2+1))%mod;
    }
    
    cout<<ans<<endl;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin>>T;
    while(T--)
        solve();

    return 0;
}
