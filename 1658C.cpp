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

    ll one = 0, idx = -1;
    for (int i = 0; i < n; i++)
        if (a[i] == 1)
        {
            one++;
            idx = i;
        }

    if (one != 1)
    {
        cout << "NO" << endl;
        return;
    }

    ll last = 1;
    for (int i = idx + 1; i < idx + n; i++)
    {
        if (a[i % n] >= 2 && a[i % n] <= last + 1)
        {
            last = a[i % n];
        }
        else
        {
            cout << "NO" << endl;
            return;
        }
    }

    cout << "YES" << endl;
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
