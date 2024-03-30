#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<vector<ll>> v(n + 1);
    for (ll i = 0; i < n; ++i)
    {
        ll a, b;
        cin >> a >> b;
        v[a].push_back(b);
    }
    for (auto &x : v)
    {
        sort(x.rbegin(), x.rend());
    }
    ll ans = 0;
    for (ll i = 0; i <= n; ++i)
    {
        ll sz = v[i].size();
        for (ll j = 0; j < min(i, sz); ++j)
        {
            ans += v[i][j];
        }
    }
    cout << ans << endl;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}
