#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n;
    cin >> n;

    ll a[n], b[n], c[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        cin >> b[i];

    for (int i = 0; i < n; i++)
        c[i] = a[i] - b[i];

    ll mx = -1e9;
    for (int i = 0; i < n; i++)
        mx = max(mx, c[i]);

    vector<ll> v;
    for (int i = 0; i < n; i++)
    {
        if (c[i] == mx)
            v.push_back(i + 1);
    }
    cout << v.size() << endl;
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";

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
