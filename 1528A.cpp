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

ll dp1[100005], dp2[100005];
ll l[100005], r[100005];
vector<ll> adj[100005];

void dfs(ll node, ll par) {
    dp1[node] = 0; 
    dp2[node] = 0;

    for (auto it : adj[node]) {
        if (it == par) continue;
        dfs(it, node);

        dp1[node] += max(abs(l[node] - l[it]) + dp1[it], abs(l[node] - r[it]) + dp2[it]);
        dp2[node] += max(abs(r[node] - l[it]) + dp1[it], abs(r[node] - r[it]) + dp2[it]);
    }
}

void solve() {
    ll n;
    cin >> n;
    
    for (ll i = 0; i < n; i++) cin >> l[i] >> r[i];

    for (ll i = 0; i < n - 1; i++) {
        ll u, v;
        cin >> u >> v;
        --u, --v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    dfs(0, -1);
    cout << max(dp1[0], dp2[0]) << endl;
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
function<void(ll, ll)> dfs = [&](ll node, ll par) -> void {
    int cnt = 0;
    for(auto it : adj[node]) {
        if(it != par) {
            dfs(it, node);
            cnt += childs[it];
        }
    }
    childs[node] = 1 + cnt;
};
dfs(1, -1);