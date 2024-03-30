#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n;
    cin >> n;

    ll a[n * (n - 1) / 2];
    for (int i = 0; i < n * (n - 1) / 2; i++)
        cin >> a[i];
    ll mx = -1e9;
    for (int i = 0; i < n * (n - 1) / 2; i++)
        mx = max(mx, a[i]);

    unordered_map<ll, ll> mp;
    for (int i = 0; i < n * (n - 1) / 2; i++)
        mp[a[i]]++;

    vector<ll> v;

    for (auto x : mp)
    {
        for (int i = 0; i < x.second / 2; i++)
        {
            v.push_back(x.first);
        }
    }

    ll te = v.size();
    for (int i = 0; i < n - te; i++)
    {
        v.push_back(mx);
    }

    for (int i = 0; i < n; i++)
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
