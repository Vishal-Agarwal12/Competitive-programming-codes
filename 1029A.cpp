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
    string s;
    cin>>s;

    string t = s;
    sort(all(t));
    if(t[0] == t[n-1]) {
        cout<<s;
        for(int i=0;i<k-1;i++) {
            cout<<s[0];
        }
        cout<<endl;
        return;
    }

    if(n%2==0) {
        for(int i=n/2;i>=2;i--) {
            string sss = "";
            if(n%i == 0) {
                sss = s.substr(0, i);
                string sts;
                for(int j=0;j<n/i;j++) {
                    sts+=sss;
                }
                if(sts == s) {
                    cout<<s;
                    for(int i=0;i<k-1;i++) cout<<sss;
                    cout<<endl;
                    return;
                }
            }

        }
    }

    ll fg = 0;
    string tt = "";
    for(int i=(n+1)/2;i<n;i++) {
        string ss = s.substr(i, n-i);
        fg = 1;
        for(int j = 0;j<ss.size();j++) {
            if(ss[j] != s[j]) {
                fg = 0;
                break;
            }
        }
        if(fg) {
            tt = ss;
            break;
        }
    }

    if(fg == 0) {
        for(int i=0;i<k;i++) {
            cout<<s;
        }
        cout<<endl;
        return;
    }

    string str = s.substr(tt.size(), n-tt.size());
    cout<<s;
    for(int i=0;i<k-1;i++) cout<<str;
    cout<<endl;

}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
