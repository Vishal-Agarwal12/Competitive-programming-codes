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
    ll n, q;
    cin >> n >> q;

    vector<vector<ll>> adj(n+1);
    for(int i = 2; i <= n; i++) {
        ll x;
        cin >> x;
        adj[i].push_back(x);
        adj[x].push_back(i);
    }

    vector<ll> trav;
    vector<ll> childs(n + 1);

    auto dfs = [&] (auto&& self, ll node, ll par) -> void {
        trav.push_back(node);
        int cnt = 0;
        for(auto it : adj[node]) {
            if(it != par) {
                self(self, it, node);
                cnt += childs[it];
            }
        }
        childs[node] = 1 + cnt;
    };

    dfs(dfs, 1, -1);

    map<ll, ll> mp;
    for(int i = 0; i < n; i++) {
        mp[trav[i]] = i;
    }

    // for(auto x: childs) cout << x << " ";
    while(q--) {
        ll x, y;
        cin >> x >> y;
        if(childs[x] < y) cout << -1 << endl;
        else {
            cout << trav[mp[x] + y - 1] << endl; 
        }
    }
}



signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
