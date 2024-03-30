#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n, a, b;
    cin >> n >> a >> b;

    ll mx = 0;
    for (ll x = 1; x < n ; x++)
    {
        mx = max(mx, min(a / x, b / (n - x)));
    }
    cout << mx << endl;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
