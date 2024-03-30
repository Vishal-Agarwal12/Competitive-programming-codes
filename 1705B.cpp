#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n;
    cin >> n;

    ll a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    ll ans = 0, fg = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] > 0)
        {
            ans += a[i];
            fg = 1;
        }
        else if (fg)
            ans += 1;
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
