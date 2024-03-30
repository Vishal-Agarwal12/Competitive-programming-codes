#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n, res = 0;
    cin >> n;

    vector<ll> v1;

    for (ll i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            v1.push_back(i);
            if (n / i != i)
                v1.push_back(n / i);
        }
    }
    for (ll x : v1)
        res += x;

    cout << res << endl;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
