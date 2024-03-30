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
#define nl '\n'
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
    ll n, k;
    cin>>n>>k;

    vector<ll> v(n);
    ll x, y, s1, s2, s3;
    cout<<"or 1 2"<<endl;
    cin>>x;
    cout<<"and 1 2"<<endl;
    cin>>y;
    s1 = x+y;

    cout<<"or 2 3"<<endl;
    cin>>x;
    cout<<"and 2 3"<<endl;
    cin>>y;
    s2 = x+y;

    cout<<"or 1 3"<<endl;
    cin>>x;
    cout<<"and 1 3"<<endl;
    cin>>y;
    s3 = x+y;

    v[0] = (s1-s2+s3)/2;
    v[1] = (s1+s2-s3)/2;
    v[2] = (s2+s3-s1)/2;

    for(int i=3;i<n;i++) {
        cout<<"or "<<i<<" "<<i+1<<endl;
        cin>>x;
        cout<<"and "<<i<<" "<<i+1<<endl;
        cin>>y;
        v[i] = (x+y) - v[i-1];
    }
    sort(all(v));
    cout<<"finish "<<v[k-1]<<endl;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    //freopen("input.txt", "rt", stdin);
    //freopen("output.txt", "wt", stdout);

    solve();

    return 0;
}
