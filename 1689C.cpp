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

void dfs(vector<ll> adj[], vector<ll> &dp, ll node, ll par = -1) {
    ll cnt = 0;
    for(auto it: adj[node]) {
        if(it != par) {
            dfs(adj, dp, it, node);
            cnt += dp[it];
        }
    }
    dp[node] = 1+cnt;
}

ll dfs2(vector<ll> adj[], vector<ll> &dp, vector<ll> &dp2, ll node, ll par = -1) {
    vector<ll> v;
    for(auto it: adj[node]) 
        if(it != par)
            v.pb(it);
    if(dp2[node] != -1)return dp2[node];
    if(v.size()==0) return 0;
    else if(v.size() == 1) {
        return dp[v[0]];
    }
    else {
        return dp2[node] = max(dp[v[0]] + dfs2(adj, dp, dp2, v[1], node), dp[v[1]] + dfs2(adj, dp, dp2, v[0], node));
    }
}

void solve()
{
    ll n, u, v;
    cin>>n;
    vector<ll> adj[n+1];
    for(int i=0;i<n-1;i++) {
        cin>>u>>v;
        adj[u].pb(v);
        adj[v].pb(u);
    }    
    vector<ll> dp(n+1, -1);
    vector<ll> dp2(n+1, -1);

    dfs(adj, dp, 1);
    for(int i=1;i<=n;i++) dp[i]--;
    
    cout<<dfs2(adj, dp, dp2, 1)<<endl;
    // for(int i=1;i<=n;i++) cout<<dp2[i]<<" ";
    
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