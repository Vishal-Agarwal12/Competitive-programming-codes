#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<pair<ll, ll>> v;
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        v.push_back({x, i + 1});
    }

    sort(v.begin(), v.end());
    ll ans = 1;
    for (int i = 1; i < n; i++)
    {
        if (v[i].second - v[i - 1].second < 0)
            ans++;
    }

    cout << ans << endl;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
