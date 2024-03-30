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

    ll one = 0, zero = 0;
    sort(a,a+n);
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 1)
            one++;
        if (a[i] == 0)
            zero++;
    }
    if (one == 0)
    {
        cout << "YES" << endl;
        return;
    }

    ll fg = 1;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 1)
            continue;
        else if (a[i] < 3)
            fg = 0;
    }
    for (int i = 1; i < n; i++)
    {
        if (a[i] - a[i - 1] == 1)
        {
            fg = 0;
            break;
        }
    }

    if (fg)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
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
