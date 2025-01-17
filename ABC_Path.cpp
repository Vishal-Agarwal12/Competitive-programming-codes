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

int dx[] = {-1, 1, 0, 0, 1, 1, -1, -1};
int dy[] = {0, 0, -1, 1, 1, -1, 1, -1};

void solve(int h, int w, int cs)
{
    int ans = 1, fg = 0;
    vector<vector<int>> g(h, vector<int> (w));
    vector<vector<int>> dp(h, vector<int> (w, -1));
    for(int i=0;i<h;i++) {
        for(int j=0;j<w;j++) {
            char ch;
            cin>>ch;
            g[i][j] = (ch-'A');
            if(g[i][j] == 0) fg = 1;
        }
    }
    if(!fg) {
        cout<<"Case "<<cs<<": "<<0<<nl;
        return;
    }

    auto isvalid = [&](int x, int y) {
        return x>=0 && x<h && y>=0 && y<w;
    };

    auto dfs = [&](auto &&self, ll x, ll y) -> int {
        if(dp[x][y] != -1) return dp[x][y];

        int res = 1;

        for(int i=0;i<8;i++) {
            int nx = x+dx[i], ny = y+dy[i];
            if(isvalid(nx, ny) && g[x][y]+1 == g[nx][ny]) {
                res = max(res, 1+self(self, nx, ny));
            }
        }
        return dp[x][y] = res;
    };

    for(int i=0;i<h;i++) {
        for(int j=0;j<w;j++) {
            if(g[i][j] == 0) {
                ans = max(ans, dfs(dfs, i, j));
            }
        }
    }
    
    cout<<"Case "<<cs<<": "<<ans<<nl;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    //freopen("input.txt", "rt", stdin);
    //freopen("output.txt", "wt", stdout);

    int h, w, cs = 1;
    while(true) {
        cin>>h>>w;
        if(h == 0 && w == 0) break;
        solve(h, w, cs);
        cs++;
    }

    return 0;
}

/*
1 1
B
1 2
AA
1 1
A
1 1
B
5 3
ABF
CFG
OQP
DCB
PQA
0 0
*/