#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n, m, k;
    cin >> n >> m >> k;

    ll a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++)
    {
        a[i] = m - a[i] + 1;
    }
    if (a[n - 1] >= k)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
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
