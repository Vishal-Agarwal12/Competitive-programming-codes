#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll a, b, c;
    cin >> a >> b >> c;
    if (a + b >= 10 || b + c >= 10 || a + c >= 10)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
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
