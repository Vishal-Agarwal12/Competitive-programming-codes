#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    string s;
    cin >> s;

    unordered_map<char, ll> mp;
    for (ll i = 0; i < s.size(); i++)
    {
        mp[s[i]] = i;
    }

    multiset<char> ms;
    ll i=0;
    for (char x = '0'; x <= '9'; ++x)
    {
        if (mp.find(x) == mp.end())
            continue;
        for (; i <= mp[x]; ++i)
        {
            if (s[i] == x || s[i] == '9')
            {
                ms.insert(s[i]);
            }
            else
                ms.insert(s[i] + 1);
        }
    }

    for (auto x : ms)
    {
        cout << x;
    }
    cout << "\n";
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
