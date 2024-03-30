#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define loop(n) for (long long i = 0; i < n; i++)
#define rloop(n) for (long long i = n - 1; i >= 0; i--)

const ll MOD = 1e9 + 7;

long long binaryExponentiation(long long base, long long power)
{
    if (power == 0)
        return 1;
    long long res = binaryExponentiation(base, power / 2);
    if (power % 2)
        return (res % MOD * res % MOD * base) % MOD;
    else
        return (res % MOD * res % MOD) % MOD;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int t;
    cin >> t;
    while (t--)
    {
        ll n, q, x, y;
        cin >> n >> q;

        ll a[n];
        loop(n) cin >> a[i];

        sort(a, a + n);
        ll b[n + 1];
        loop(n + 1) b[i] = 0;
        while (q--)
        {
            cin >> x >> y;
            b[x - 1] += 1;
            b[y] -= 1;
        }

        loop(n + 1)
        {
            if (i)
                b[i] += b[i - 1];
        }

        std::vector<pair<ll, ll>> v, vv;
        loop(n)
        {
            v.pb({b[i], i});
        }
        sort(v.rbegin(), v.rend());

        ll p = n - 1, ans = 0;
        for (auto it : v)
        {
            ans += (it.first * a[p]);
            vv.pb({it.second, a[p--]});
        }

        cout << ans << "\n";
        sort(vv.begin(), vv.end());
        for (auto it : vv)
        {
            cout << it.second << " ";
        }
        cout << "\n";
    }
    return 0;
}