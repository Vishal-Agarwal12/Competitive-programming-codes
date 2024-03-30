#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n, m, h, ans = 0;
    cin >> n >> m >> h;

    ll a[n], b[m];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < m; i++)
        cin >> b[i];

    sort(a, a + n, greater<ll>());
    sort(b, b + m, greater<ll>());

    for (int i = 0; i < min(n, m); i++)
    {
        if (b[i] * h >= a[i])
            ans += a[i];
        else
            ans += (b[i] * h);
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
