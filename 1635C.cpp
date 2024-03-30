#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n, c = 1;
    cin >> n;
    ll a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = 1; i < n; i++)
    {
        if (a[i] >= a[i - 1])vhhjghg
            c++;
    }
    if (c == n)
    {
        cout << 0 << endl;
        return;
    }

    if (a[n - 2] <= a[n - 1] && a[n - 2] - a[n - 1] <= a[n - 2])
    {
        cout << n - 2 << endl;
        for (int i = 1; i <= n - 2; i++)
        {
            cout << i << " " << n-1 << " " << n << endl;
        }
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
