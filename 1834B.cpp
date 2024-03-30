#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    string l, r, c;
    cin >> l >> r;

    if (l == r)
    {
        cout << 0 << endl;
        return;
    }

    ll ans = 0;
    if (l.size() != r.size())
    {
        ans = (r[0] - '0');
        for (int i = 1; i < r.size(); i++)
        {
            ans += 9;
        }

        cout << ans << endl;
        return;
    }

    ll id = 1;
    for (int i = 0; i < l.size(); i++)
    {
        if (l[i] == r[i])
            continue;
        else
        {
            id = i;
            ans = (r[i] - l[i]);
            break;
        }
    }
    for (int i = id + 1; i < l.size(); i++)
    {
        ans += 9;
    }

    cout << ans << endl;
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
