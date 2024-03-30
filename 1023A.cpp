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
    ll n, m;
    cin>>n>>m;
    string s,t;
    cin>>s>>t;

    if(m < n-1) {
        cout<<"NO"<<endl;
        return;
    }
    ll c = 0, j = m-1;
    for(int i=0;i<n;i++) if(s[i] == '*') c++;
    if(!c) {
        if(n!=m) {
            cout<<"NO"<<endl;
            return;
        }
        for(int i=0;i<n;i++) {
            if(s[i] != t[i]) {
                cout<<"NO"<<endl;
                return;
            }
        }
        cout<<"YES"<<endl;
        return;
    }
    if(s[0] == '*') {
        for(int i=n-1;i>0;i--,j--) {
            if(s[i] != t[j]) {
                cout<<"NO"<<endl;
                return;
            }
        }
        cout<<"YES"<<endl;
        return;
    }
    j = 0;
    if(s[n-1] == '*') {
        for(int i=0;i<n-1;i++, j++) {
            if(s[i] != t[j]) {
                cout<<"NO"<<endl;
                return;
            }
        }
        cout<<"YES"<<endl;
        return;
    }

    string s1="", s2="";
    for(int i=0;i<n;i++) {
        if(s[i] == '*') {
            s1 = s.substr(0, i);
            s2 = s.substr(i+1, n-(i+1));
        }
    }

    for(int i=0;i<s1.size();i++) {
        if(s1[i] != t[i]) {
            cout<<"NO"<<endl;
            return;
        }
    }
    for(int i=s2.size()-1, j = m-1;i>=0;i--,j--) {
        if(s2[i] != t[j]) {
            cout<<"NO"<<endl;
            return;
        }
    }

    cout<<"YES"<<endl;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
