#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    string s;
    cin >> s;

    ll res = (s[0] - 'a') * 26;
    if (s[1] > s[0])
    {
        cout << res + (s[1] - 'a' + 1) - (s[0] - 'a' + 1) << endl;
    }
    else
    {
        cout << res + (s[1] - 'a' + 1) - (s[0] - 'a') << endl;
    }
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
