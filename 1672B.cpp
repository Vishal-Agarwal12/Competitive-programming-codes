#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    string s;
    cin >> s;

    if (s[0] == 'B')
    {
        cout << "NO" << endl;
        return;
    }
    if (s[s.size() - 1] != 'B')
    {
        cout << "NO" << endl;
        return;
    }

    ll cnta = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'A')
            cnta++;
        else
        {
            if (cnta == 0)
            {
                cout << "NO" << endl;
                return;
            }
            else
                cnta--;
        }
    }

    cout << "YES" << endl;
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
