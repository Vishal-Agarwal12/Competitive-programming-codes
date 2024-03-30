#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;

    string s;
    cin >> s;

    if (k == 0)
    {
        cout << 1 << endl;
        return;
    }
    ll fg = 1;
    for (int i = 0; i < s.size() / 2; i++)
    {
        if (s[i] != s[n - i - 1])
        {
            fg = 0;
            break;
        }
    }

    if (fg)
    {
        cout << 1 << endl;
    }
    else
        cout << 2 << endl;
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
