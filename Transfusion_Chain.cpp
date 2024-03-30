#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n;
    cin >> n;

    unordered_map<string, ll> mp;
    for (int i = 0; i < n; i++)
    {
        string ch;
        cin >> ch;
        mp[ch]++;
    }

    ll ans = 0;
    ans += (max(mp["A"], mp["B"]));

    ans += (mp["O"]);
    ans += mp["AB"];

    if (ans > 0)
        cout << ans << endl;
    else
        cout << 1 << endl;
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
