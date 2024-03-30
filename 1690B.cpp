#include <bits/stdc++.h>
#define ll int
using namespace std;

void solve()
{
    ll n, mx = 0;
    cin >> n;

    vector<ll> a(n), b(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        cin >> b[i];

    if (n == 1)
    {
        if (a[0] >= b[0])
        {
            cout << "YES\n";
        }
        else
            cout << "NO\n";
        return;
    }
    vector<ll> v;

    for (int i = 0; i < n; i++)
    {
        if (a[i] < b[i])
        {
            cout << "NO\n";
            return;
        }
        else if (b[i] == 0)
        {
            mx = max(mx, a[i] - b[i]);
        }
        else
            v.push_back(a[i] - b[i]);
    }

    sort(v.begin(), v.end());
    if (mx)
    {
        if (!v.empty() && v[0] == v[v.size() - 1] && mx <= v[0])
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    else if (!mx)
    {
        if (!v.empty() && v[0] == v[v.size() - 1])
            cout << "YES\n";
        else if (v.empty())
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return;
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
