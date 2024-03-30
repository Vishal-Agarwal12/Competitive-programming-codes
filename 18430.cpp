#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n, res = 0;
    cin >> n;
    ll a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    sort(a, a + n);

    for (int i = 0; i < n / 2; i++)
    {
        res += (a[n - i - 1] - a[i]);
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
