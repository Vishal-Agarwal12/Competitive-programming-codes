#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll x, y, fg = 0;
    cin >> x >> y;

    if (x == 1 && y == 2)
    {
        fg = 1;
    }
    else if (x == 2 && y == 3)
    {
        fg = 1;
    }
    else if (x == 4 && y == 5)
    {
        fg = 1;
    }
    else if (x == 5 && y == 6)
    {
        fg = 1;
    }
    else if (x == 7 && y == 8)
    {
        fg = 1;
    }
    else if (x == 8 && y == 9)
    {
        fg = 1;
    }

    if (fg == 1)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
