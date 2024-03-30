#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    string s;
    cin >> s;

    if (n == 1 || n == 4)
    {
        cout << "YES" << endl;
        return;
    }
    if (n == 2 && s[0] == s[1])
    {
        cout << "YES" << endl;
        return;
    }
    if (n == 3 && s[0] == s[2])
    {
        cout << "YES" << endl;
        return;
    }

    for (int i = 0; i <= n - 5; i++)
    {
        if (s[i] == s[i + 1])
        {
            cout << "YES" << endl;
            return;
        }
    }
    reverse(s.begin(), s.end());

    for (int i = 0; i <= n - 5; i++)
    {
        if (s[i] == s[i + 1])
        {
            cout << "YES" << endl;
            return;
        }
    }

    cout << "NO" << endl;
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
