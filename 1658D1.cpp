#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll l, r;
    cin >> l >> r;
    vector<ll> cc(30);
    for (ll i = 0; i < r - l + 1; i++)
    {
        ll x;
        cin >> x;
        for (ll j = 0; j < 30; j++)
        {
            cc[j] += (x >> j) & 1;
        }
    }
    ll ans = 0;
    for (ll i = 0; i < 30; i++)
    {
        if (cc[i] > (r - l + 1) - cc[i])
        {
            ans += (1 << i);
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
