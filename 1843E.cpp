#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve()
{
    ll n, m;
    cin >> n >> m;

    ll l[m], r[m];
    for (ll i = 0; i < m; i++)
    {
        ll x, y;
        cin >> x>> y;
        x--;
        y--;
        l[i] = x;
        r[i] = y;
    }

    ll q;
    cin >> q;

    ll quer[q];
    for (ll i = 0; i < q; i++)
    {
        ll z;
        cin >> z;
        z--;
        quer[i] = z;
    }

    ll lo = 0, hi = q - 1, ans = -1;
    while (lo <= hi)
    {
        ll mid = (lo + hi) / 2;
        ll pref[n] = {0};
        for (ll i = 0; i <= mid; i++)
        {
            pref[quer[i]] = 1;
        }

        for (ll i = 1; i < n; i++)
        {
            pref[i] += pref[i - 1];
        }

        bool ok = false;
        for (ll i = 0; i < m; i++)
        {
            ll ones = pref[r[i]] - (l[i] == 0 ? 0ll : pref[l[i] - 1]);
            ll zeroes = (r[i] - l[i] + 1 - ones);

            if (ones > zeroes)
            {
                ok = true;
                break;
            }
        }
        if (ok)
        {
            ans = mid;
            hi = mid - 1;
        }
        else
            lo = mid + 1;
    }
    if (ans != -1)
    {
        cout << ans + 1 << endl;
    }
    else
        cout << -1 << endl;
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
