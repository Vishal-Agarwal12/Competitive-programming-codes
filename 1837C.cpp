#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    string s;
    cin >> s;
    ll n = s.size();
    if (s[0] == '?')
        s[0] = '0';
    if (s[n - 1] == '?')
        s[n - 1] = '1';

    for (int i = 1; i < n - 1; i++)
    {
        if (s[i] == '?')
        {
            if (s[i - 1] == '1' && s[i + 1] == '1')
                s[i] = '1';
            else if (s[i - 1] == '0' && s[i + 1] == '0')
                s[i] = '0';
            else if (s[i - 1] == '1' && s[i + 1] == '?')
                s[i] = '1';
            else if (s[i - 1] == '0' && s[i + 1] == '?')
                s[i] = '0';
            else
                s[i] = '1';
        }
    }

    cout << s << endl;
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
