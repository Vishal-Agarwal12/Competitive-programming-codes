#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll x, y, z;
    cin >> x >> y >> z;

    if ((x * y) % z == 0)
    {
        cout << x * y << " " << z << endl;
    }
    else if ((z * y) % x == 0)
    {
        cout << z * y << " " << x << endl;
    }
    else if ((z * x) % y == 0)
    {
        cout << z * x << " " << y << endl;
    }
    else
        cout << -1 << endl;
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
