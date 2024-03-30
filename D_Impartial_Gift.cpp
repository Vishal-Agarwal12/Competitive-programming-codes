#include <bits/stdc++.h>
#define ll long long 
using namespace std;

void solve()
{
    ll n, m, d;
    cin >> n >> m >> d;

    ll a[n];
    ll b[m];
    for (ll i = 0; i < n; i++)
        cin >> a[i];
    for (ll i = 0; i < m; i++)
        cin >> b[i];

    sort(a, a + n);
    sort(b, b + m);

    ll i = n - 1, j = m - 1;
    while (i >= 0 && j >= 0)
    {
        if (abs(a[i] - b[j]) <= d)
        {
            cout << a[i] + b[j] << endl;
            return;
        }
        else if (abs(a[i] - b[j]) > d)
        {
            if (a[i] >= b[j])
            {
                i--;
            }
            else
                j--;
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
