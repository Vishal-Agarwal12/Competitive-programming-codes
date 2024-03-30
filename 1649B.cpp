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

    sort(a, a + n);
    ll s = 0;
    for (int i = 0; i < n - 1; i++)
    {
        s += a[i];
    }

    if (s == 0 && a[n - 1] == 0)
        cout << 0 << endl;
    else if (a[n - 1] > s)
    {
        cout << a[n - 1] - s << endl;
    }
    else
        cout << 1 << endl;
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
