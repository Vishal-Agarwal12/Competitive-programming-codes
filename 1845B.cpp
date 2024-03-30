#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll x1, y1, x2, y2, x3, y3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

    ll ans = 0;
    if ((x1 >= x2 && x1 >= x3) || (x1 <= x2 && x1 <= x3))
    {
        ans = min(abs(x1 - x2), abs(x1 - x3));
    }
    if ((y1 >= y2 && y1 >= y3) || (y1 <= y2 && y1 <= y3))
    {
        ans += min(abs(y1 - y2), abs(y1 - y3));
    }
    ans++;

    cout << ans << endl;
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
