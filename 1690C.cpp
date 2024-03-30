#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n), b(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        cin >> b[i];

    cout << b[0] - a[0] << " ";
    ll mx = b[0];
    for (int i = 1; i < n; i++)
    {
        if (a[i] >= mx)
        {
            cout << b[i] - a[i] << " ";
            mx = max(mx, b[i]);
        }
        else
        {
            cout << b[i] - mx << " ";
            mx = max(mx, b[i]);
        }
    }
    cout << endl;
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
