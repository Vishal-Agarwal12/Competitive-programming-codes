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

    if (n == 1)
    {
        cout << 0 << endl;
        return;
    }

    sort(a, a + n);
    ll cnt = 1, mx = 0;
    for (int i = 1; i < n; i++)
    {
        if (a[i] - a[i - 1] <= k)
        {
            cnt++;
        }
        else
        {
            mx = max(mx, cnt);
            cnt = 1;
        }
    }
    if (cnt > 1)
        mx = max(mx, cnt);
    cout << n - mx << endl;
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
