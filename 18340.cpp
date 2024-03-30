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

    int c = 0, d = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 1)
            c++;
        else if (a[i] == -1)
            d++;
    }
    if (c == 0 && d <= 3)
    {
        cout << d << endl;
        return;
    }
    ll i = 0;
    if (d % 2 == 1)
    {
        c++;
        d--;
        if (c == d)
        {
            cout << 1 << endl;
            return;
        }
        while (d > c)
        {
            d -= 2;
            c += 2;
            i += 2;
        }
        cout << 1 + i << endl;
        return;
    }
    else
    {
        i = 0;
        if (c >= d)
        {
            cout << 0 << endl;
            return;
        }
        while (d > c)
        {
            d -= 2;
            i += 2;
            c += 2;
        }
        cout << i << endl;
    }
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
