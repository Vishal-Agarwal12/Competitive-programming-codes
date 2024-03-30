#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n, mx = 0, ans = 0;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        ll x;
        cin >> x;
        mx = max(mx, x);
        if (mx == i)
            ans++;
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
