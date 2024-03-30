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

    string s1,s2;
    cin>>s1>>s2;

    map<char, ll> m1,m2;
    for(int i=0;i<n;i++) m1[s1[i]]++;
    for(int i=0;i<n;i++) m2[s2[i]]++;

    map<char, ll> m3;
    for(int i=0;i<n;i++) {
        m3[s1[i]] = abs(m1[s1[i]] - m2[s1[i]]);
        m3[s2[i]] = abs(m1[s2[i]] - m2[s2[i]]);
    }
    // cout<<m3;
    for(auto x: m3) {
        if(x.second % k != 0) {
            cout<<"No"<<endl;
            return;
        }
    }
    vector<ll> v1,v2;
    for(int i=0;i<n;i++) {
        if(m3.count(s1[i])) {
            v1.pb(s1[i]-'a');
        }
        if(m3.count(s2[i])) {
            v2.pb(s2[i]-'a');
        }
    }

    // cout<<v1;
    // cout<<v2;
    sort(all(v1));
    sort(all(v2));

    for(int i=0;i<n;i++) {
        if(v1[i] > v2[i]) {
            cout<<"No"<<endl;
            return;
        }
    }
    cout<<"Yes"<<endl;
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
