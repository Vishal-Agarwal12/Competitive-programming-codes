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

 
void solve() {
    int n, k;
    cin >> n >> k;
    vector<vector<int>> C(k);
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        C[x - 1].push_back(i);
    }
    int ans = INT_MAX;
    for (int i = 0; i < k; i++) {
        int prv = -1;
        vector<int> gaps;
        for (auto j : C[i]) {
            gaps.push_back(j - prv - 1);
            prv = j;
        }
        gaps.push_back(n - prv - 1);
        sort(gaps.rbegin(), gaps.rend());
        ans = min(ans, max(gaps[0] / 2, gaps[1]));
    }
    cout << ans << endl;
}
 

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--)
        solve();

    return 0;
}
