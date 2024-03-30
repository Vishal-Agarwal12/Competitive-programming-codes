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

bool isP(ll n) {
    for(ll i = 2;i*i<=n;i++) {
        if(n%i == 0) return 0;
    }
    return 1;
}

void solve()
{
    ll n;
    cin>>n;
    ll n1 = n;
    if(n==1) {
        cout<<"FastestFinger"<<endl;
        return;
    }
    if(n==2) {
        cout<<"Ashishgup"<<endl; 
        return;
    }
    if(n%2==1) {
        cout<<"Ashishgup"<<endl; 
        return;
    }
    else {
        if((n & (n-1)) == 0) {
            cout<<"FastestFinger"<<endl;
        }
        else if(n%4==0) cout<<"Ashishgup"<<endl; 
        else if(isP(n/2)) cout<<"FastestFinger"<<endl;
        else cout<<"Ashishgup"<<endl; 
    }
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
