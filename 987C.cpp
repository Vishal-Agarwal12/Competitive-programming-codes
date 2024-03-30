#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n, mn1 = 1e9, mn2 = 1e9, ans = 1e9, fg = 0;
    cin >> n;
    ll s[n], c[n];
    for (int i = 0; i < n; i++)
        cin >> s[i];
    for (int i = 0; i < n; i++)
        cin >> c[i];

    for (int j = 1; j < n - 1; j++)
    {
        for (int i = 0; i < j; i++)
        {
            if (s[i] < s[j])
            {
                mn1 = min(mn1, c[i]);
            }
        }
        for (int k = j + 1; k < n; k++)
        {
            if (s[k] > s[j])
            {
                mn2 = min(mn2, c[k]);
            }
        }
        if (mn1 == 1e9 || mn2 == 1e9)
            continue;
        else
        {
            fg = 1;
            ans = min(ans, c[j] + mn1 + mn2);
        }
    }
    if (fg == 0)
        cout << -1 << endl;
    else
        cout << ans << endl;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}