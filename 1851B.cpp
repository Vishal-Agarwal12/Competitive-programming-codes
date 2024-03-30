#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n;
    cin >> n;

    vector<ll> e, o;
    ll a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
            e.push_back(a[i]);
        else
            o.push_back(a[i]);
    }

    sort(e.begin(), e.end());
    sort(o.begin(), o.end());

    vector<ll> r;
    ll j = 0, k = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            r.push_back(e[j]);
            j++;
        }
        else
        {
            r.push_back(o[k]);
            k++;
        }
    }

    for (int i = 1; i < n; i++)
    {
        if (r[i] < r[i - 1])
        {
            cout << "NO" << endl;
            return;
        }
    }

    cout << "YES" << endl;
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
