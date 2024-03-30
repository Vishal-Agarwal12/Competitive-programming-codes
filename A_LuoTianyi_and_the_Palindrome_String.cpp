#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n, m;
    cin >> n >> m;

    ll l = 0, r = 0;
    vector<ll> dec;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x == -1)
            l++;
        else if (x == -2)
            r++;
        else
            dec.push_back(x);
    }

    ll occ[m] = {0};
    if (l)
    {
        for (int i = 0; i < l && i < m; i++)
        {
            occ[i] = 1;
        }
    }
    if (r)
    {
        for (int i = m - 1; i >= 0 && r > 0; i--)
        {
            if (occ[i] == 0)
            {
                occ[i] = 1;
            }
            else
                break;
            r--;
        }
    }

    for (int i = 0; i < dec.size(); i++)
    {
        if (occ[dec[i] - 1] == 0)
        {
            occ[dec[i] - 1] = 1;
        }
    }

    ll ans = 0;
    for (int i = 0; i < m; i++)
    {
        if (occ[i] == 1)
            ans++;
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
