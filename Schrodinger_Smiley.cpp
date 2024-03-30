#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n, res = 0;
    cin >> n;

    string s;
    cin >> s;

    for (int i = 0; i < n - 1; i++)
    {
        if (s[i] == ':' && s[i + 1] == ')')
        {
            i++;
            while (s[i] == ')' && i < n)
            {
                i++;
            }
            if (s[i] == ':')
                res++;
            i--;
        }
    }

    cout << res << endl;
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
