#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n;
    cin >> n;

    if (n % 2 == 1)
    {
        cout << 0 << endl;
        return;
    }
    ll x = n / 2;
    ll ans = 1;
    for (int i = 2; i <= x; i++)
    {
        ans = (ans * i * i) % 998244353;
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
