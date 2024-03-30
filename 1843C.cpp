#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n, res = 0;
    cin >> n;

    while (n != 0)
    {
        res += n;
        n /= 2;
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
