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

    ll sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum += a[i];
    }

    sort(a, a + n);
    ll b[n];
    for (int i = n - 1; i > 0; i--)
    {
        if (a[i] != 1)
        {
            b[i] = 1;
            sum -= 1;
        }
        else
        {
            b[i] = 2;
            sum -= 2;
        }
    }
    b[0] = sum;

    for (int i = 0; i < n; i++)
    {
        if (a[i] == b[i] || b[i] <= 0)
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
