#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n, c = 0;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        if (x == i + 1)
            c++;
    }
    cout << (c + 1) / 2 << endl;
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
