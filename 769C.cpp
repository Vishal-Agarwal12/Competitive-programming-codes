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

int dx[] = {+1, 0, 0, -1};
int dy[] = {0, -1, +1, 0};
void solve()
{
    int n, m, k;
    cin>>n>>m>>k;

    int sx, sy;
    vector<vector<bool>> vis(n, vector<bool> (m));
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            char c;
            cin>>c;
            if(c == '*') vis[i][j] = true;
            else if(c == 'X') sx = i, sy = j;
        }
    }
    if(k%2==1) {
        cout<<"IMPOSSIBLE"<<nl;
        return;
    }

    auto isvalid = [&](int x, int y) {
        return x>=0 && x<n && y>=0 && y<m;
    };

    queue<pair<int, int>> q;
    q.push({sx, sy});
    vector<char> ans;

    bool fg = false;
    while(!q.empty()) {
        auto top = q.front();
        q.pop();
        int x = top.fi, y = top.se;
        for(int i=0;i<4;i++) {
            int xx = x+dx[i], yy = y+dy[i];
            if(isvalid(xx, yy) && !vis[xx][yy]) {
                if(i==0) ans.pb('D');
                else if(i==1) ans.pb('L');
                else if(i==2) ans.pb('R');
                else if(i==3) ans.pb('U');
                q.push({xx, yy});
                break;
            }
            if(ans.size() == k/2) {
                fg = true;
                break;
            }
        }
        if(fg) break;
    }
    if(fg == false) {
        cout<<"IMPOSSIBLE"<<nl;
        return;
    }

    for(int i=k/2-1;i>=0;i--) {
        if(ans[i] == 'L') ans.pb('R');
        else if(ans[i] == 'D') ans.pb('U');
        else if(ans[i] == 'R') ans.pb('L');
        else ans.pb('D'); 
    }
    for(auto x: ans) cout<<x;
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
