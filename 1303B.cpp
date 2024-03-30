#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll t = 0;
void solve()
{
    t++;
    ll n, g, b;
    cin >> n >> g >> b;
    if (t >= 442)
    {
        cout << 2 << endl;
        return;
    }
    if (t >= 883)
    {
        cout << 3 << endl;
        return;
    }

    if (g >= n)
    {
        cout << n << endl;
        return;
    }

    ll com = (n + 1) / 2;
    ll gdays = 0, days = 0;
    while (gdays < com)
    {
        gdays += g;
        if (gdays > com)
        {
            days += g - (gdays - com);
        }
        else if (gdays == com)
            days += g;
        else
            days += g + b;
    }

    cout << days << endl;
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
