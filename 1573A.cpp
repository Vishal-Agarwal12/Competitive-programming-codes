#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    string s;
    cin >> s;

    ll ans = 0;
    ans += (s[n - 1] - '0');

    for (int i = 0; i < n - 1; i++)
    {
        if (s[i] != '0')
            ans += (s[i] - '0' + 1);
    }
    cout << ans << endl;
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