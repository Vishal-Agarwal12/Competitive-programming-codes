#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    string s;
    cin >> s;
    if (s.size() == 1 && s[0] == 1)
    {
        cout << 1 << endl;
        return;
    }

    ll n = s.size(), id = n;

    if (s[0] - '0' >= 5)
    {
        cout << 1;
        for (int i = 0; i < n; i++)
            cout << 0;
        cout << endl;
        return;
    }

    for (int i = n - 1; i > 0; i--)
    {
        if (s[i] - '0' >= 5 && s[i - 1] != '9')
            s[i - 1] = static_cast<char>(s[i - 1] + 1);
    }

    cout << s[0];
    for (int i = 1; i < n; i++)
    {
        if (s[i] - '0' < 5)
            cout << s[i];
        else
        {
            id = i;
            break;
        }
    }
    for (int i = id; i < n; i++)
    {
        cout << 0;
    }

    cout << endl;
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
