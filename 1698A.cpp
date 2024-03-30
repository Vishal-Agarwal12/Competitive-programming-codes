#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n;
    cin >> n;

    ll a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    ll res = a[0];
    for (int i = 1; i < n; i++)
    {
        res ^= a[i];
    }

    for (int i = 0; i < n; i++)
    {
        if ((res ^ a[i]) == a[i])
        {
            cout << a[i] << endl;
            return;
        }
        else
            res ^= a[i];
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
