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
    vector<ll> a(n);
    for(int i=0;i<n;i++) cin>>a[i];

    ll fg = 1;
    for(int i=1;i<n;i++) {
        if(a[i] < a[i-1]) {
            fg = -1;
            break;
        }
    }
    if(fg==1) {
        cout<<0<<endl;
        return;
    }
    fg = 1;
    for(int i=1;i<n;i++) {
        if(a[i] > a[i-1]) {
            fg = -1;
            break;
        }
    }
    if(fg==1) {
        cout<<1<<endl;
        return;
    }

    ll id = -1, mx = maxv(a), mn = minv(a);
    bool f = true;
    set<ll> s;
    s.insert(a[0]);
    for(int i=1;i<n;i++) {
        if(a[i]<=a[i-1]) s.insert(a[i]);
        else {
            id = i;
            if(a[i] != mx) {
                f=false;
                break;
            }
            for(int j=i;j<n-1;j++) {
                if(a[j+1] < *s.rbegin()) f = false;
                if(a[j] < a[j+1]) f = false;
            }
            break;
        }
    }
    ll ans = -1, ans2=-1;
    if(f) {
        ans = min(id+1, n-id+1);
    }

    f = true;
    set<ll> s1;
    s1.insert(a[0]);
    for(int i=1;i<n;i++) {
        if(a[i] >= a[i-1]) s1.insert(a[i]);
        else {
            id = i;
            if(a[i] != mn) {
                f=false;
                break;
            }
            for(int j=i;j<n-1;j++) {
                if(a[j+1] > *s1.begin()) f = false;
                if(a[j] > a[j+1]) f = false;
            }
            break;
        }
    }
    if(f) {
        ans2 = min(id+2, n-id);
    }
    if(ans!=-1 && ans2!=-1) cout<<min(ans, ans2)<<endl;
    else if(ans!=-1) cout<<ans<<endl;
    else if(ans2!=-1) cout<<ans2<<endl;
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
