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
    ll n, k, u, v;
    cin>>n>>k;

    vector<ll> adj[n+1];
    vector<ll> deg(n+1, 0);
    vector<ll> dep(n+1, 0);

    for(int i=0;i<n-1;i++) {
        cin>>u>>v;
        adj[u].pb(v);
        adj[v].pb(u);
        deg[u]++;
        deg[v]++;
    }

    queue<ll> q;
    for(int i=1;i<=n;i++) {
        if(deg[i] == 1) q.push(i);
    }

    while(!q.empty()) {
        ll node = q.front();
        q.pop();

        for(auto it: adj[node]) {
            if(deg[it] <= 1) continue;
            deg[it]--;
            dep[it] = max(dep[it], dep[node]+1);
            if(deg[it] == 1) q.push(it);
        }
    }

    ll ans = 0;
    for(int i=1;i<=n;i++) {
        if(dep[i] >= k) ans++;
    }
    cout<<ans<<endl;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin>>T;
    while(T--)
        solve();

    return 0;
}
