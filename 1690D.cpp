#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n, k, mx = 0;
    cin >> n >> k;

    string s;
    cin >> s;
    ll pref[n + 1];
    pref[0] = 0;

    for (int i = 1; i <= n; i++)
    {
        pref[i] = pref[i - 1] + (s[i - 1] == 'B' ? 1 : 0);
    }

    for (int i = 0; i <= n - k; i++)
    {
        mx = max(mx, pref[i + k] - pref[i]);
    }

    cout << k - mx << endl;
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
