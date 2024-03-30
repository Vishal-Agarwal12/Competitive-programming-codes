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
    string s;
    cin>>s;

    vector<char>vv;
    vector<string> ans;
    for(int i=0;i<n;i++) {
        if(s[i] == 'a' || s[i] == 'e') vv.pb('v');
        else vv.pb('c');
    }

    stack<char> st;
    for(auto x: vv) st.push(x);
    vector<ll> v;

    string ss;
    while(!st.empty()) {
        ss += st.top();
        st.pop();
        if(ss == "cvc") {
            v.pb(3);
            ss.clear();
        }
        else if(ss == "vc") {
            v.pb(2);
            ss.clear();
        }
    }

    reverse(all(v));
    // cout<<v;

    ll k = 0;
    for(int i=0;i<sz(v);i++) {
        ll kk = k;
        for(int j=kk;j<kk+v[i];j++) {
            cout<<s[j];
            k++;
        }
        if(i!=sz(v)-1) cout<<".";
    }
    // cout<<s<<endl;
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
