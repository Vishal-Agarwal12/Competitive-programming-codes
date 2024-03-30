#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n, m;
    cin >> n >> m;

    ll a[n], b[m];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < m; i++)
        cin >> b[i];

    vector<pair<ll, ll>> v, x;
    for (int i = 0; i < n; i++)
    {
        v.push_back({a[i], i + 1});
    }
    for (int i = 0; i < m; i++)
    {
        v.push_back({b[i], 0});
    }
    sort(v.begin(), v.end());

    for (int i = 0; i < m; i++)
    {
        x.push_back({b[i], i + 1});
    }
    for (int i = 0; i < n; i++)
    {
        x.push_back({a[i], 0});
    }
    sort(x.begin(), x.end());

    for (int i = 0; i < n + m; i++)
    {
        if (v[i].second > 0)
            cout << i + 1 << " ";
    }
    cout << endl;
    for (int i = 0; i < n + m; i++)
    {
        if (x[i].second > 0)
            cout << i + 1 << " ";
    }
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
