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
    ll n, k;
    cin>>n>>k;

    string s;
    cin>>s;

    ll ans[n] = {0};
    if(k%2==1) {
        for(int i=0;i<n;i++) {
            if(s[i] == '0') s[i] = '1';
            else s[i] = '0';
        }
    }

    for(int i=0;i<n;i++) {
        if(s[i] == '0' && k>0) {
            s[i] = '1';
            ans[i]=1;
            k--;
        }
    }
    if(k>0) {
        if(k%2==1) {
            if(s[n-1] == '1') s[n-1] = '0';
            else s[n-1] = '1';
        }
        ans[n-1]+=k;
    }

    cout<<s<<endl;
    for(auto x: ans) cout<<x<<" ";
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
