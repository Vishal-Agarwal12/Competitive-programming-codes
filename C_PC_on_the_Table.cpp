#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll h, w;
    cin >> h >> w;

    vector<string> v(h);
    for (int i = 0; i < h; i++)
    {
        cin >> v[i];
    }

    for (int i = 0; i < h; i++)
    {
        string s = v[i];
        for (int j = 0; j < w - 1; j++)
        {
            if (s[j] == 'T' && s[j + 1] == 'T')
            {
                s[j] = 'P';
                s[j + 1] = 'C';
            }
        }
        v[i] = s;
    }

    for (int i = 0; i < h; i++)
    {
        cout << v[i] << endl;
    }
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
