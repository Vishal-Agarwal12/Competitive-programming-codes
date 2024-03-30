#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n, m, k, h;
    cin >> n >> m >> k >> h;
    ll a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);

    ll ans = 0;
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 1; j < m; j++)
        {
            if (a[i] + j * k == h || a[i] - j * k == h)
                ans++;
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
