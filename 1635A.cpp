#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n;
    cin >> n;

    ll a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    ll res = a[0];
    for (int i = 1; i < n; i++)
    {
        res = (res | a[i]);
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
