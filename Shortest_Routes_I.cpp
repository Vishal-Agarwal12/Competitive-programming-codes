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

    vector<vector<pair<ll, ll>>> adj(n+1);
    vector<ll> p(n+1, -1);
    for(int i=0;i<m;i++) {
        ll u, v, d;
        cin>>u>>v>>d;
        adj[u].pb({v, d});
    }

    using pii = pair<ll, ll>;
    priority_queue<pii, vector<pii>, greater<pii>> q;
    vector<ll> dist(n+1, inf);
    q.push({0, 1});
    dist[1] = 0;

    while(!q.empty()) {
        ll v = q.top().second;
        ll d_v = q.top().first;
        q.pop();

        if(d_v != dist[v]) continue;

        for(auto edge: adj[v]) {
            ll to = edge.first;
            ll len = edge.second;

            if(dist[v] + len < dist[to]) {
                dist[to] = dist[v] + len;
                p[to] = v;
                q.push({dist[to], to});
            }
        }
    }
    for(int i=1;i<=n;i++) cout<<dist[i]<<" ";
    cout<<nl;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    //freopen("input.txt", "rt", stdin);
    //freopen("output.txt", "wt", stdout);

    solve();

    return 0;
}
