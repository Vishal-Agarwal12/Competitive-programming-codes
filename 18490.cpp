#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll b, c, h;
    cin >> b >> c >> h;

    if (c + h >= b - 1)
    {
        cout << 2 * b - 1 << endl;
    }
    else
    {
        cout << 2 * (c + h) + 1 << endl;
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
