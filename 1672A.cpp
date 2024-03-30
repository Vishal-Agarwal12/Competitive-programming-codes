#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n;
    cin >> n;

    ll a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    ll res = 0;
    for (auto x : a)
    {
        res += (x - 1);
    }
    if (res % 2 == 1)
    {
        cout << "errorgorn" << endl;
    }
    else
        cout << "maomao90" << endl;
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
