#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll l, r, a;
    cin >> l >> r >> a;

    cout << l / a - 1 + a - 1 << endl;
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
