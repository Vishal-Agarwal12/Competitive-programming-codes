#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n, q;
    cin >> n >> q;

    vector<ll> a(n);
    vector<pair<ll, ll>> k;

    for (ll i = 0; i < n; i++)
        cin >> a[i];
    for (ll i = 0; i < q; i++)
    {
        ll x;
        cin >> x;
        k.push_back({x, i});
    }

    sort(k.begin(), k.end());
    vector<ll> res(q);
    ll sum = 0, j = 0;
    for (ll i = 0; i < q; i++)
    {
        while (j < n)
        {
            if (k[i].first >= a[j])
            {
                sum += a[j];
                j++;
            }
            else
                break;
        }
        res[k[i].second] = sum;
    }

    for (ll i = 0; i < q; i++)
    {
        cout << res[i] << " ";
    }
    cout << "\n";
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
