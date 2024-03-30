#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n, m;
    cin >> n >> m;

    ll a[n + 1][m + 1];
    ll odd = 1, even = 2, temp = 0, z = 1;
    if (n % 2 == 0)
    {
        for (int j = 1; j <= m; j++)
        {
            for (int i = 1; i <= n; i++)
            {
                a[i][j] = z;
                z++;
            }
        }
    }
    else
    {
        ll z = (n / 2) * m + 1;
        ll temp = 1, fg = 0;

        for (int i = 1; i <= n; i++)
        {
            if (fg == 0)
            {
                for (int j = 1; j <= m; j++)
                {
                    a[i][j] = z;
                    z++;
                }
            }
            else
            {
                for (int j = 1; j <= m; j++)
                {
                    a[i][j] = temp;
                    temp++;
                }
            }
            fg = !fg;
        }
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
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
