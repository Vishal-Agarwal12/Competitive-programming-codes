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

    ll pos = -1;
    for (int i = n - 1; i > 0; i--)
    {
        if (a[i] < a[i - 1])
        {
            pos = i;
            break;
        }
    }
    if (pos == -1)
    {
        cout << 0 << endl;
        return;
    }
    ll mx = 0;
    for (int i = 0; i < pos; i++)
    {
        mx = max(mx, a[i]);
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
