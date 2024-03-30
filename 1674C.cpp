#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    string s, t;
    cin >> s >> t;

    if (t == "a")
    {
        cout << 1 << endl;
        return;
    }
    ll fg = 0;
    for (int i = 0; i < t.size(); i++)
    {
        if (t[i] == 'a')
        {
            fg = 1;
            break;
        }
    }

    if (fg && t.size() > 1)
    {
        cout << -1 << endl;
        return;
    }
    else
    {
        cout << (1ll << s.size()) << endl;
        return;
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
