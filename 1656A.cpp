#include <bits/stdc++.h>
#define ll int
using namespace std;

void solve()
{
    ll n, b = 0, c = 0;
    cin >> n;

    ll a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    if (n == 1)
    {
        cout << 1 << " " << 1 << endl;
        return;
    }
    ll mn = a[0], mx = a[0];
    for (int i = 0; i < n; i++)
    {
        mn = min(a[i], mn);
        mx = max(mx, a[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if (a[i] == mn)
            b = i + 1;
        if (a[i] == mx)
            c = i + 1;
    }

    if (b > c)
        swap(b, c);
    cout << b << " " << c << endl;
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
