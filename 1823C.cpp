#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n, k;
    cin >> n;
    ll product = 1;
    ll a[n];
    map<ll, ll> s;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        ll r = a[i];
        for (ll j = 2; j * j <= r; j++)
        {
            while (r % j == 0)
            {
                r /= j;
                s[j]++;
            }
        }
        if (r > 1)
            s[r]++;
    }
    ll ans = 0, c = 0;
    for (auto i : s)
    {
        ans += i.second / 2;
        c += i.second % 2;
    }
    ans += c / 3;
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
