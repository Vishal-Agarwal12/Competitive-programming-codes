#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    string s;
    cin >> s;

    ll b1 = -1, b2 = -1;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'B' && b1 == -1)
            b1 = i;
        else if (s[i] == 'B' && b2 == -1)
        {
            b2 = i;
            break;
        }
    }

    ll k = 0, r1 = -1, r2 = -1;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'R' && r1 == -1)
            r1 = i;
        else if (s[i] == 'R' && r2 == -1)
        {
            r2 = i;
            break;
        }
    }

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'K')
        {
            k = i;
            break;
        }
    }

    if ((r1 < k && r2 > k) && (b1 + b2) % 2 == 1)
    {
        cout << "Yes\n";
    }
    else
        cout << "No\n";
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
