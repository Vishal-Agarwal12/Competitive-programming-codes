#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n, m;
    cin >> n >> m;

    ll s1 = 0, s2 = 0, x, y;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        s1 += x;
    }
    for (int i = 0; i < m; i++)
    {
        cin >> y;
        s2 += y;
    }

    if (s1 == s2)
    {
        cout << "Draw" << endl;
    }
    else if (s1 >= s2)
    {
        cout << "Tsondu" << endl;
    }
    else
        cout << "Tenzing" << endl;
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
