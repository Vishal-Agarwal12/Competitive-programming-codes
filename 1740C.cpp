#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n, ans = 0;
    cin >> n;

    ll a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    sort(a, a + n);

    ll mx = 0;
    for (int i = n - 2; i >= 1; i--)
    {
        mx = max(mx, a[i + 1] - a[i] + a[i + 1] - a[0]);
    }

    for (int i = 0; i < n - 2; i++)
    {
        mx = max(mx, a[i + 1] - a[i] + a[n - 1] - a[i]);
    }

    cout << mx << endl;
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
