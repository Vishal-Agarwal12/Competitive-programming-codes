#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n;
    cin >> n;

    ll a[n];
    for (ll i = 0; i < n; i++)
        cin >> a[i];

    vector<ll> vec(n);
    for (ll i = 0; i < n; i++)
    {
        vec[i] = abs((i + 1) - a[i]);
    }

    ll mn = 1e8;
    for (int i = 0; i < n; i++)
    {
        if (vec[i] != 0)
        {
            mn = min(mn, vec[i]);
        }
    }

    cout << mn << endl;
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