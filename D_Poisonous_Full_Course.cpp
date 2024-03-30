#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n;
    cin >> n;

    ll dp[n + 1][2];
    for (int i = 0; i < n + 1; i++)
    {
        dp[i][0] = -1e12;
        dp[i][1] = -1e12;
    }

    dp[0][0] = 0;
    for (int i = 1; i <= n; i++)
    {
        ll x, y;
        cin >> x >> y;

        if (x == 0)
        {
            dp[i][0] = max(dp[i - 1][0], max(dp[i - 1][0] + y, dp[i - 1][1] + y));
        }
        else
        {
            dp[i][1] = max(dp[i - 1][0] + y, dp[i - 1][1]);
        }
    }
    dp[n][1] = max(dp[n - 1][1], dp[n][1]);
    dp[n][0] = max(dp[n - 1][0], dp[n][0]);

    cout << max(dp[n][0], dp[n][1]) << endl;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
