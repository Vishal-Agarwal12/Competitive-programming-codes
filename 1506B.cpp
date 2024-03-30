#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;
    ll l = 0, r = n - 1, i;
    string s;
    cin >> s;

    for (ll i = 0; i < n; i++)
    {
        if (s[i] == '*')
        {
            s[i] = 'x';
            l = i;
            break;
        }
    }
    for (ll i = n - 1; i >= 0; i--)
    {
        if (s[i] == '*')
        {
            s[i] = 'x';
            r = i;
            break;
        }
    }
    ll res = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'x')
            res++;
    }
    if (res == 1 || res==0)
        cout << res << endl;
    else
        cout << res + (r - l - 1) / k << endl;
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
