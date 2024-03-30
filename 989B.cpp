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
    ll n, p;
    cin>>n>>p;

    string s;
    cin>>s;

    if(p==n) {
        cout<<"No"<<endl;
        return;
    }

    for(int i=0;i<n-p;i++) {
        if(s[i] == '0' && s[i+p] == '.') {
            s[i+p] = '1';
        }  
        if(s[i] == '1' && s[i+p] == '.') {
            s[i+p] = '0';
        } 
        if(s[i] == '.' && s[i+p] == '0') {
            s[i] = '1';
        } 
        if(s[i] == '.' && s[i+p] == '1') {
            s[i] = '0';   
        } 
        if(s[i]=='.' && s[i+p]=='.') {
            s[i]='0';
            s[i+p]='1';
        }
    }
    for(int i=0;i<n;i++) {
        if(s[i] == '.') s[i] = '0';
    }

    ll c = 0;
    for(int i=0;i<n-p;i++) {
        if(s[i] != s[i+p]) {
            c++;
            break;
        }
    }
    
    if(c > 0) {
        cout<<s<<endl;
    }
    else cout<<"No"<<endl;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
