#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n, x;
    cin >> n >> x;

    ll a[n], b[n], c[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        cin >> b[i];
    for (int i = 0; i < n; i++)
        cin >> c[i];

    ll ans = 0;
    for (int i = 0; i < n; i++)
    {
        if ((a[i] & x) == a[i])
        {
            ans = (ans | a[i]);
        }
        else
            break;
    }
    for (int i = 0; i < n; i++)
    {
        if ((b[i] & x) == b[i])
        {
            ans = (ans | b[i]);
        }
        else
            break;
    }
    for (int i = 0; i < n; i++)
    {
        if ((c[i] & x) == c[i])
        {
            ans = (ans | c[i]);
        }
        else
            break;
    }

    if (ans == x)
    {
        cout << "Yes" << endl;
    }
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
