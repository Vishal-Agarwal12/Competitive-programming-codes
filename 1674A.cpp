#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll x, y;
    cin >> x >> y;

    if (x > y)
    {
        cout << 0 << " " << 0 << endl;
    }
    else if (x == y)
    {
        cout << 1 << " " << 1 << endl;
    }
    else if (y % x == 0)
    {
        cout << 1 << " " << y / x << endl;
    }
    else
    {
        cout << 0 << " " << 0 << endl;
    }
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
