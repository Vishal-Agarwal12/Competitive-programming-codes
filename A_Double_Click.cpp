#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n, d;
    cin >> n >> d;

    ll a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = 1; i < n; i++)
    {
        if (a[i] - a[i - 1] <= d)
        {
            cout << a[i] << endl;
            return;
        }
    }

    cout << -1 << endl;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
