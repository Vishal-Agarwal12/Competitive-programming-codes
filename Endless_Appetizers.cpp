#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll x, y, r;
    cin >> x >> y >> r;

    ll st = r / 30;

    ll ts = st + x;

    if (ts % y == 0)
    {
        cout << ts / y << endl;
    }
    else
        cout << ts / y + 1 << endl;
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
