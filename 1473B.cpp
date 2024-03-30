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
    string s1,s2;
    cin>>s1>>s2;

    ll n = s1.size(), m = s2.size();
    if(n < m) swap(s1, s2),swap(n,m);
    ll lm = (n*m)/__gcd(n,m);
    
    string s="",ss="";
    for(int i=0;i<lm/n;i++) {
        s+=s1;
    }
    for(int i=0;i<lm/m;i++) {
        ss+=s2;
    }
    // cout<<s<<endl;
    if(s == ss) cout<<s<<endl;
    else cout<<-1<<endl;
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
