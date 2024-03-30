#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;

    ll a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    if (k == 1)
    {
        cout << (n - 1) / 2 << endl;
        return;
    }

    ll res = 0;

    for (int i = 1; i < n - 1; i++)
    {
        if (a[i] > a[i - 1] + a[i + 1])
            res++;
    }

    cout << res << endl;
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