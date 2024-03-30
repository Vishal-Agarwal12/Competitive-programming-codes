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
    ll n, m, k;
    cin>>n>>m>>k;

    using pii = pair<ll, ll>;
    vector<vector<pair<pii, ll>>> adj(n+1);
    vector<ll> d(n+1, inf);
    set<pii> tr ;
    for(int i=0;i<m;i++) {
        ll u, v, w;
        cin>>u>>v>>w;
        adj[u].pb({{v, w}, 0});
        adj[v].pb({{u, w}, 0});
    }
    for(int i=0;i<k;i++) {
        ll v, w;
        cin>>v>>w;
        adj[1].pb({{v, w}, 1});
        adj[v].pb({{1, w}, 1});
        tr.ins({v, w});
    }

    
    queue<pair<pair<ll,ll>, ll>> q; 
    q.push({{0, 1}, 0});
    d[1] = 0;
    while(!q.empty()) {
        ll v = q.front().fi.se;
        ll d_v = q.front().fi.fi;
        ll type = q.front().se;
        q.pop();

        if(d_v != d[v]) continue;
        if(type == 1) {
            // if(tr.count({v, d_v})
            tr.erase({v, d_v});
        }

        for(auto it: adj[v]) {
            ll to = it.fi.fi;
            ll len = it.fi.se;
            if(d[v] + len < d[to]) {
                d[to] = d[v] + len;
                q.push({{d[to], to}, it.se});
            }
        }
    }

    cout<<tr.size()<<nl;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    //freopen("input.txt", "rt", stdin);
    //freopen("output.txt", "wt", stdout);

    solve();

    return 0;
}
