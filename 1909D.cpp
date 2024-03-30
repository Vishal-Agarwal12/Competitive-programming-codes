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
    ll n,k;
    cin>>n>>k;
    ll a[n];
    for(int i=0;i<n;i++) cin>>a[i];

    sort(a,a+n);
    if(a[0] == a[n-1]) {
        cout<<0<<endl;
        return;
    }

    ll ans = 0, g = a[0]-k;
    for(int i=0;i<n;i++) {
        g = __gcd(g, a[i]-k);
    }
    for(int i=0;i<n;i++) {
        if((a[i]-k)/g<=0){
            cout<<-1<<endl;
            return;
        }
        ans += (a[i]-k)/g-1;
    }
    cout<<max(-1LL,ans)<<endl;
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
