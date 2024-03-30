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

bool check(string x) {
    int a = 0, y = 0, z = 0;
    for (int i = 0; i < x.size(); i++) {
        if (x[i] >= 'a' && x[i] <= 'z') a = 1;
        if (x[i] >= 'A' && x[i] <= 'Z') y = 1;
        if (x[i] >= '0' && x[i] <= '9') z = 1;
    }
    return a & y & z;
}

void solve() {
    string s;
    cin >> s;
    string ans;
    for(int i = 0; i < s.size()-1; i++){
        string t = s;
        t[i] = '0'; t[i+1] = 'a';
        if(check(t)){
            ans = t;
        }
        t[i] = 'a'; t[i+1] = 'A';
            if(check(t)){
            ans = t;
        }
        t[i] = 'A'; t[i+1] = '0';
            if(check(t)){
            ans = t;
        }

    }
    for(int i = 0; i < s.size(); i++){
        string t = s;
        t[i] = '0';
        if(check(t)){
            ans = t;
        }
        t[i] = 'a';
            if(check(t)){
            ans = t;
        }
        t[i] = 'A';
            if(check(t)){
            ans = t;
        }
    }
    if(check(s)) ans = s;
    cout<<ans<<endl;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tt;
    cin>>tt;
    while(tt--)
        solve();

    return 0;
}
