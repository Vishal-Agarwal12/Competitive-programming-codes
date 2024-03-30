#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;
    string s, t;
    cin >> s >> t;

    unordered_map<char, int> mp;
    for (char c = 'a'; c <= 'z'; ++c)
    {
        mp.insert(make_pair(c, 0));
    }
    for (auto ch : s)
        mp[ch]--;
    for (auto ch : t)
        mp[ch]++;

    for (auto ch : s)
    {
        if (mp[ch] != 0)
        {
            cout << "NO\n";
            return;
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (i - k < 0 && i + k >= n && s[i] != t[i])
        {
            cout << "NO\n";
            return;
        }
    }

    cout << "YES\n";
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
