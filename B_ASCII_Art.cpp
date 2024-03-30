#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll r, c;
    cin >> r >> c;

    vector<vector<int>> v(r, vector<int>(c, 0));

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> v[i][j];
        }
    }

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (v[i][j] != 0)
                cout << char(v[i][j] + 64);
            else
                cout << '.';
        }
        cout << endl;
    }
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
