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

    for(int i=0;i<k;i++) {
        if(s[i] == '?')
        for(int j=i+k;j<n;j+=k) {
            if(s[j] != '?') {
                s[i] = s[j];
                // break;
            }
        }
        // s[i] = tmp;
    }
    for(int i=0;i<k;i++) {
        if(s[i] != '?')
        for(int j=i+k;j<n;j+=k) {
            if(s[j] == '?') continue;
            if(s[j] != s[i]) {
                cout<<"NO"<<endl;
                return;
            }
        }
    }
    // cout<<s<<endl;
    ll on = 0, zr = 0;
    for(int i=0;i<k;i++) {
        if(s[i] == '1') on++;
        else if(s[i] == '0') zr++;
    }
    if(on <= k/2 && zr<=k/2) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
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
