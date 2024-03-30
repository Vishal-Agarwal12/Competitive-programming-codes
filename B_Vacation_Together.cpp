#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n, d;
    cin >> n >> d;

    vector<string> v;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        v.push_back(s);
    }

    ll fg, mx = 0, c = 0;
    for (int i = 0; i < d; i++)
    {
        fg = 1;
        for (int j = 0; j < n; j++)
        {
            if (v[j][i] == 'x')
            {
                fg = 0;
                break;
            }
        }
        if (fg)
            c++;
        else
            c = 0;
        mx = max(mx, c);
    }
    mx = max(mx, c);
    cout << mx << endl;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
