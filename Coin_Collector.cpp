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
    ll n, m;
    cin>>n>>m;

    vector<ll> coins(n+1);
    for(int i=1;i<=n;i++) cin>>coins[i];

    vector<vector<ll>> adj(n+1), rev_adj(n+1), adj_scc(n+1);
    for(int i=0;i<m;i++) {
        ll u, v;
        cin>>u>>v;
        adj[u].pb(v);
        rev_adj[v].pb(u);
    }

    vector<ll> order;
    vector<bool> vis(n+1);
    auto dfs1 = [&](auto &&self, ll node) -> void {
        vis[node] = true;
        for(auto it: adj[node]) {
            if(!vis[it]) self(self, it);
        }
        order.pb(node);
    };

    for(int i=1;i<=n;i++) {
        if(!vis[i]) {
            dfs1(dfs1, i);
        }
    }

    reverse(all(order));

    vector<vector<ll>> comp;
    vector<ll> cmp;
    vis.clear();
    vis.resize(n+1);

    auto dfs2 = [&](auto &&self, ll node) -> void {
        vis[node] = true;
        cmp.pb(node);
        for(auto it: rev_adj[node]) {
            if(!vis[it]) self(self, it);
        }
    };
    
    vector<ll> roots(n+1), root_nodes, sum(n+1);

    for(auto x: order) {
        if(!vis[x]) {
            cmp.clear();
            dfs2(dfs2, x);
            int root = x;
            for(auto u: cmp) {
                roots[u] = root;
                sum[root] += coins[u];
            }
            root_nodes.pb(root);
        }
    }   

    reverse(all(root_nodes));  
    
    for(int v=1;v<=n;v++) {
        for(auto u: adj[v]) {
            int root_v = roots[v], root_u = roots[u];

            if (root_u != root_v)
                adj_scc[root_v].push_back(root_u);
        }      
    }

    ll ans = 0;
    // cout<<sum;
    for(int v=1;v<=n;v++) {
        ll val = 0;
        for(auto x: adj_scc[v]) {
            val = max(val, sum[x]);
        }
        ans = max(ans, sum[v]+val);
    }
    cout<<ans<<nl;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    //freopen("input.txt", "rt", stdin);
    //freopen("output.txt", "wt", stdout);

    solve();

    return 0;
}
