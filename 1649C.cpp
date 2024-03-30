#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n, m;
    cin >> n >> m;
    ll arr[n][m];
    map<ll, vector<ll>> cx, cy;
    set<ll> clr;
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < m; j++)
        {
            int a;
            cin >> a;
            clr.insert(a);
            cx[a].push_back(i);
            cy[a].push_back(j);
        }
    }
    ll ans = 0;
    for (ll c : clr)
    {
        sort(cx[c].begin(), cx[c].end());
        sort(cy[c].begin(), cy[c].end());
        ll pref = 0;
        for (ll i = 1; i < cx[c].size(); i++)
        {
            ll diff = cx[c][i] - cx[c][i - 1];
            ans += i * diff;
            ans += pref;
            pref += i * diff;
        }
        pref = 0;
        for (ll i = 1; i < cy[c].size(); i++)
        {
            ll diff = cy[c][i] - cy[c][i - 1];
            ans += i * diff;
            ans += pref;
            pref += i * diff;
        }
    }
    cout << ans << "\n";
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
