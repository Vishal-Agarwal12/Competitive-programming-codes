#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n, id = n;
    cin >> n;
    ll a[n + 1];
    for (int i = 1; i <= n; i++)
        cin >> a[i];

    bool ok = true, found = false;
    for (int i = 1; i <= n; i++)
    {
        found = false;
        for (int j = 2; j <= i + 1; j++)
        {
            if (a[i] % (j) != 0)
            {
                found = true;
                break;
            }
        }
        ok &= found;
        if (!ok)
        {
            cout << "NO" << endl;
            return;
        }
    }

    cout << "YES" << endl;
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
