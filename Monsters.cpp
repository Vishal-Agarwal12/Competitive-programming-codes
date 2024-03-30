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

int dx[] = {1, -1, 0, 0};
int dy[] = {0, 0, 1, -1};
void solve()
{
    int n, m;
    cin>>n>>m;

    vector<vector<bool>> vis(n+1, vector<bool> (m+1));
    vector<vector<int>> dis1(n+1, vector<int> (m+1));
    vector<vector<int>> dis2(n+1, vector<int> (m+1));
    vector<vector<char>> par(n+1, vector<char> (m+1));
    ll sx, sy;
    queue<pair<int, int>> q;

    for(int i=1;i<=n;i++) {
        for(int j=1;j<=m;j++) {
            char c;
            cin>>c;
            if(c == '#') vis[i][j] = true;
            else if(c=='M') q.push({i, j});
            else if(c == 'A') sx = i, sy = j;
        }   
    }
    auto isvalid = [&](ll x, ll y) {
        return x>=1 && x<=n && y>=1 && y<=m;
    };

    while(!q.empty()) {
        auto top = q.front();
        q.pop();
        int x = top.fi, y = top.se;
        vis[x][y] = true;
        for(int i=0;i<4;i++) {
            int xx = x+dx[i], yy = y+dy[i];
            if(isvalid(xx, yy) && !vis[xx][yy]) {
                vis[xx][yy] = true;
                dis1[xx][yy] = dis1[x][y] + 1;
            }
        }
    }
    cout<<dis1;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
