#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n;
    cin >> n;

    ll a[n], b[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        cin >> b[i];

    vector<pair<ll, ll>> v;
    for (int i = 0; i < n; i++)
    {
        v.push_back({a[i], b[i]});
    }

    sort(v.begin(), v.end());

    ll ans = 1, mx = 0;
    for (int i = 1; i < n; i++)
    {
        if ((v[i].first >= v[i - 1].first && v[i].first <= v[i - 1].second) ||
            v[i].first == v[i - 1].second)
            ans++;
        else
        {
            mx = max(mx, ans);
            ans = 1;
        }
    }
    if (ans > 1)
    {
        mx = max(mx, ans);
    }

    if (mx == 0)
    {
        cout << 1 << endl;
    }
    else
        cout << mx << endl;
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
