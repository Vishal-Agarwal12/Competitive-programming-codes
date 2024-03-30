#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n, x;
    cin >> n >> x;
    unordered_set<ll> s;
    ll a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = 0; i < n; i++)
    {
        if (a[i] == x)
        {
            cout << 1 << endl;
            return;
        }
    }
    sort(a, a + n);
    for (int i = 0; i < n; i++)
    {
        if (2 * a[i] >= x)
        {
            cout << 2 << endl;
            return;
        }
    }
    ll res = 1e18, mx = a[n - 1];
    for (int i = n - 1; i >= 0; i--)
    {
        if (x % a[i] == 0)
        {
            res = x / a[i];
            break;
        }
    }
    if (x % mx == 0)
    {
        cout << x / mx << endl;
    }
    else
    {
        cout << min(x / mx + 1, res) << endl;
    }
    return;
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