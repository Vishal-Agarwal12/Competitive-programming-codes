#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n, x;
    cin >> n >> x;

    ll a[2 * n];
    for (int i = 0; i < 2 * n; i++)
        cin >> a[i];

    sort(a, a + 2 * n);
    int j = n;
    for (int i = 0; i < n; i++)
    {
        if (a[j] - a[i] < x)
        {
            cout << "NO" << endl;
            return;
        }
        j++;
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
