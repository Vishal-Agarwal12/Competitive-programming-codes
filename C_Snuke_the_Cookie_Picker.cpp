#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll r, c;
    cin >> r >> c;

    char a[r][c];
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            cin >> a[i][j];

    ll cnt = 0;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (a[i][j] == '.')
            {
                if (i > 0 && a[i - 1][j] == '#')
                {
                    cnt++;
                }
                if (i < r - 1 && a[i + 1][j] == '#')
                {
                    cnt++;
                }
                if (j > 0 && a[i][j - 1] == '#')
                    cnt++;
                if (j < c - 1 && a[i][j + 1] == '#')
                    cnt++;
            }
            if (cnt >= 2)
            {
                cout << i + 1 << " " << j + 1 << endl;
                return;
            }
            else
                cnt = 0;
        }
    }
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // int t;
    // cin >> t;
    // while (t--)
    solve();

    return 0;
}
