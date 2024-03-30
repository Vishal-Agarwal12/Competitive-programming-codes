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

    string ss = s;
    sort(all(ss));
    if(ss[0] == ss[n-1]) {
        for(int i=0;i<n-1;i++) {
            cout<<s[0];
        }
        cout<<endl;
        return;
    }

    string s1;
    for(int i=0;i<n-1;i++) {
        if(s[i] == s[i+1]) {
            s1 += s.substr(0, i);
            s1 += s.substr(i+1, n-(i+1));
            break;
        }
    }
    string s2;
    for(int i=0;i<n-1;i++) {
        if(s[i] > s[i+1]) {
            s2 += s.substr(0, i);
            s2 += s.substr(i+1, n-(i+1));
            break;
        }
    }
    // cout<<s1<<" "<<s2<<endl;
    string s3;
    for(int i=0;i<n-1;i++) s3+=s[i];
    // cout<<s3<<endl;

    if(!s1.empty() && !s2.empty()) cout<<min(s1, min(s2, s3))<<endl;
    else if(!s1.empty()) cout<<min(s1, s3)<<endl;
    else if(!s2.empty()) cout<<min(s2, s3)<<endl;
    else {
        cout<<s3<<endl;
        return;
    }
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
