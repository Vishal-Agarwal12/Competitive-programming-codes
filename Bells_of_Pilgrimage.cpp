#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n, x, k, p;
    cin >> n >> x >> k >> p;

    ll ans = p;
    if (x <= k)
    {
        ans += (x * 10);
        ans += ((k - x) * 5);
    }
    else
        ans += (k * 10);

    if (n == x || n == k)
    {
        ans += 20;
    }

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
