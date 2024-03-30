#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    string s;
    cin >> s;

    unordered_map<char, ll> mp;
    for (int i = 0; i < s.size(); i++)
        mp[s[i]]++;

    ll ans = 0, cnt = 0;
    for (auto x : mp)
    {
        if (x.second > 1)
            ans++;
        else
            cnt++;
    }

    cout << ans + cnt / 2 << endl;
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
