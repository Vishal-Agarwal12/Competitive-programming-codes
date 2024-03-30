#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n, k, q;
    cin >> n >> k >> q;
    ll a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    vector<ll> v;
    ll cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > q)
        {
            v.push_back(cnt);
            cnt = 0;
        }
        else
            cnt++;
    }
    if (cnt > 0)
        v.push_back(cnt);

    ll ans = 0;
    for (auto x : v)
    {
        if (x >= k)
            ans += (((x - k + 1) * (x - k + 2)) / 2);
    }

    cout << ans << endl;
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
