#include <bits/stdc++.h>
#define ll long long
#define mod (int)(1e9 + 7)
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n), b(n);

    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        cin >> b[i];

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    ll res = 1;
    for (int i = 0; i < n; i++)
    {
        auto lb = (--lower_bound(b.begin(), b.end(), a[i])) - b.begin();
        if (lb - i + 1 <= 0)
        {
            cout << 0 << endl;
            return;
        }
        if (lb != 0 && lb - i + 1 != 0)
            res = (res * (lb - i + 1)) % mod;
    }

    cout << res << endl;
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
