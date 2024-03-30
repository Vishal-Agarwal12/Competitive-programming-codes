#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> v(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
    }

    vector<ll> len(n + 1);
    for (int i = 1; i <= n; i++)
    {
        ll lo = 1, hi = i, ind = 1;
        while (lo <= hi)
        {
            ll mid = (lo + hi) / 2;
            ll val = v[mid] / (i - mid + 1);
            if (val >= 1)
            {
                ind = mid;
                hi = mid - 1;
            }
            else
                lo = mid + 1;
        }
        len[i] = i - (ind - 1);
    }

    for (int i = 1; i <= n; i++)
    {
        cout << len[i] << " ";
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
