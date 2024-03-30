#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    string s;
    cin >> s;

    vector<ll> v;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '0')
            v.push_back(i);
    }
    ll ans = 0;
    for (int i = 1; i < v.size(); i++)
    {
        if (v[i] - v[i - 1] == 1)
            ans += 2;
        else if (v[i] - v[i - 1] == 2)
            ans += 1;
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
