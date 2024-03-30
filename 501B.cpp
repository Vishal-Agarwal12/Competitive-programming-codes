#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    int T;
    cin >> T;
    unordered_map<string, string> mp;
    while (T--)
    {
        string a, b;
        cin >> a >> b;
        if (mp.find(a) != mp.end())
        {
            string c = mp[a];
            mp.erase(a);
            mp[b] = (c);
        }
        else
            mp[b] = a;
    }
    cout << mp.size() << endl;
    for (auto x : mp)
    {
        cout << x.second << " " << x.first << endl;
    }
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
