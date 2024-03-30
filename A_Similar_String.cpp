#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    string s, t;
    cin >> s >> t;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == t[i])
            continue;
        else if (s[i] == 'l' && t[i] == '1')
            continue;
        else if (s[i] == '1' && t[i] == 'l')
            continue;
        else if (s[i] == '0' && t[i] == 'o')
            continue;
        else if (s[i] == 'o' && t[i] == '0')
            continue;
        else
        {
            cout << "No\n";
            return;
        }
    }

    cout << "Yes\n";
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
