#include <bits/stdc++.h>
#define ll int
using namespace std;

void solve()
{
    ll n;
    double d, h;
    cin >> n >> d >> h;

    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    sort(a, a + n);
    double ar = 0, an = 0;
    an = (2 * h) / d;

    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] + h <= a[i + 1])
        {
            ar += (d * h) / 2.0;
        }
        else
        {
            double nh = a[i + 1] - a[i];
            double newd = (2 * nh) / an;
            double b = 2 * (pow(h * h - (d * d) / 4,0.5));
            ar += (nh * (d + b)) / 2.0;
        }
    }
    ar += (d * h) / 2.0;

    cout << ar << endl;
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
