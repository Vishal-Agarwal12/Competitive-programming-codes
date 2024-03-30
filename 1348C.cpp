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

    sort(all(s));
    if(s[0] != s[k-1]) {
        cout<<s[k-1]<<endl;
    }
    else if(s[k] == s[n-1]) {
        cout<<s[0];
        for (int i=0;i<(n-1)/k;i++) cout<<s[n-1];
        cout<<endl;
    }
    else {
        cout<<s[0];
        for(int i=k;i<n;i++) {
            cout<<s[i];
        }
        cout<<endl;
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
