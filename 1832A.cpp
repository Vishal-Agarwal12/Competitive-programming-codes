#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    string s;
    cin >> s;

    ll n = s.size();
    map<char, ll> mp;
    for (int i = 0; i < s.size(); i++)
    {
        mp[s[i]]++;
    }
    ll cnt = 0;
    for (auto x : mp)
    {
        cnt = max(cnt, x.second);
    }

    if (n % 2 == 0 && cnt == n)
    {
        cout << "NO\n";
    }
    else if (n % 2 == 1 && (cnt == n - 1 || cnt ==n))
    {
        cout << "NO\n";
    }
    else
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
