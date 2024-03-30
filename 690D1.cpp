#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll r, c, ans = 0, cnt = 0;
    cin >> r >> c;
    char a[r][c];

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
            cin >> a[i][j];
    }

    for (int j = 0; j < c; j++)
    {
        if (a[r - 1][j] == 'B')
            cnt = 1;
        else
        {
            if (cnt > 0)
                ans++;
            cnt = 0;
        }
    }
    if (cnt > 0)
        ans++;

    cout << ans << endl;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
