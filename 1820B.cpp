#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    string s;
    cin >> s;

    ll a = 0, cnt = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '1')
            cnt++;
        else
        {
            a = max(a, cnt);
            cnt = 0;
        }
    }
    a = max(a, cnt);

    ll b = 0, c = 0, i = 0;
    while (s[i] == '1' && i < s.size() - 1)
    {
        i++;
        b++;
    }
    i = s.size() - 1;
    while (s[i] == '1' && i >= 0)
    {
        i--;
        c++;
    }

    ll tot = max(a, b + c);
    ll res = tot / 2;

    ll n = s.size();
    if (a == s.size())
    {
        cout << n * n << endl;
    }
    else if (tot == 0)
        cout << 0 << endl;
    else if (tot == 1)
    {
        cout << 1 << endl;
    }
    else if (tot % 2 == 0)
    {
        cout << (res) * (res + 1) << endl;
    }
    else
        cout << (res + 1) * (res + 1) << endl;
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
