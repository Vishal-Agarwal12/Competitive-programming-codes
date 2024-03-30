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

    ll c = 0;
    string t = "abacaba";
    for(int i=0;i<n-7+1;i++) {
        if(s.substr(i, 7) == t) c++;
    }

    if(c == 1) {
        for(int i=0;i<n;i++) {
            if(s[i] == '?') s[i] = 'z';
        }
        cout<<"Yes"<<endl;
        cout<<s<<endl;
        return;
    }

    if(c > 1) {
        cout<<"No"<<endl;
        return;
    }

    for(int i=0;i<n-7+1;i++) {
        ll i1 = i, i2 = 0;
        string ss = s;  
        while(i2<7) {
            if(ss[i1] == '?') {
                ss[i1] = t[i2];
                i1++,i2++;
            }
            else if(ss[i1] == t[i2]) {
                i1++;i2++;
            }
            else break;
        }
        ll c = 0;
        for(int k=0;k<n;k++) if(ss[k] == '?') ss[k] = 'z';
        for(int k=0;k<n-7+1;k++) {
            if(ss.substr(k, 7) == t) c++;
        }

        if(c == 1) {
            cout<<"Yes"<<endl;
            cout<<ss<<endl;
            return;
        }
    } 
    cout<<"No"<<endl;
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
