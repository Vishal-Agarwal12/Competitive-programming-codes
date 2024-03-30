#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    char a[3][3];
    int i = 0, j = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
            cin >> a[i][j];
    }

    if (a[0][0] == a[1][1] && a[1][1] == a[2][2] && a[0][0] != '.')
    {
        cout << a[0][0] << endl;
        return;
    }
    else if (a[0][2] == a[1][1] && a[1][1] == a[2][0] && a[1][1] != '.')
    {
        cout << a[1][1] << endl;
        return;
    }

    ll cnt = 0;
    for (int i = 0; i < 3; i++)
    {
        cnt = 0;
        for (int j = 1; j < 3; j++)
        {
            if (a[i][j] == a[i][j - 1])
                cnt++;
        }
        if (cnt == 2 && a[i][0] != '.')
        {
            cout << a[i][0] << endl;
            return;
        }
    }

    for (int i = 0; i < 3; i++)
    {
        cnt = 0;
        for (int j = 1; j < 3; j++)
        {
            if (a[j][i] == a[j - 1][i])
                cnt++;
        }
        if (cnt == 2 && a[0][i] != '.')
        {
            cout << a[0][i] << endl;
            return;
        }
    }

    cout << "DRAW" << endl;
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
