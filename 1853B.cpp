#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;

    if (k >= 29)
    {
        cout << 0 << endl;
        return;
    }
    ll fg = 1, sum = 0, ans = 0, temp = 0;
    for (int i = 0; i <= (n) / 2; i++)
    {
        ll x = i, y = n - i;
        fg = 1;
        for (int j = 0; j < k - 3; j++)
        {
            sum = y - x;
            if (sum > x)
            {
                fg = 0;
                break;
            }
            temp = y;
            y = x;
            x = temp - x;
        }
        if (fg)
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
