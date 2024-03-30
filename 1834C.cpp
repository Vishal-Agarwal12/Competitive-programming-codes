#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n;
    cin >> n;

    string s, t;
    cin >> s >> t;

    ll c1 = 0, c2 = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] != t[i])
            c1++;
    }
    if (s == t)
    {
        cout << 0 << endl;
        return;
    }

    string z = t;
    reverse(z.begin(), z.end());
    for (int i = 0; i < n; i++)
    {
        if (s[i] != z[i])
            c2++;
    }

    if (s == z)
    {
        cout << 2 << endl;
        return;
    }

    ll ans1 = 0, ans2 = 0;
    if (c1 % 2 == 0)
    {
        ans1 = 2 * c1;
    }
    else
        ans1 = 2 * c1 - 1;

    if (c2 % 2 == 0)
    {
        ans2 = 2 * c2 - 1;
    }
    else
        ans2 = 2 * c2;

    cout << min(ans1, ans2) << endl;
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
