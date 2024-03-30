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
    ll ans = 0, cnt = 0;
    ll p1 = 0, p2 = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i] == 0)
            cnt++;
    }
    if (!cnt)
    {
        cout << 0 << endl;
        return;
    }

    for (int i = 0; i < n; i++)
    {
        if (a[i] == 0)
        {
            p1 = i - 1;
            break;
        }
    }
    for (int i = n - 1; i >= 0; i--)
    {
        if (a[i] == 0)
        {
            p2 = i + 1;
            break;
        }
    }

    cout << p2 - p1 << endl;
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
