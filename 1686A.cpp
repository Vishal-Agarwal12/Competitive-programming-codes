#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n;
    cin >> n;

    double a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    double sum = 0;
    for (int i = 0; i < n; i++)
        sum += a[i];

    for (int i = 0; i < n; i++)
    {
        if ((sum - a[i]) / (n - 1) == a[i])
        {
            cout << "YES" << endl;
            return;
        }
    }
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
