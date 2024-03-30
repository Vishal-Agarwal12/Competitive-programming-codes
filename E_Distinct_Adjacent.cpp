#include <bits/stdc++.h>
#define ll int
#define mod 998244353
using namespace std;

void solve()
{
    ll n, m;
    cin >> n >> m;

    if (m >= n)
    {
        cout << n * (n + 1) / 2 << endl;
        return;
    }

    ll a = m - 1, res = 0;
    for (int i = 0; i < n - 2; i++)
    {
        res = (res + a)%mod;
    }

    res += (m - 2) % mod;
    cout << res << endl;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
