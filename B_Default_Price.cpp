#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n, m;
    cin >> n >> m;

    vector<string> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    vector<string> st(m);
    unordered_map<string, ll> mp;

    for (int i = 0; i < m; i++)
    {
        cin >> st[i];
    }

    ll c = 0;
    for (int i = 0; i < m + 1; i++)
    {
        ll x;
        cin >> x;
        if (i == 0)
            c = x;
        else
            mp[st[i - 1]] = x;
    }

    ll res = 0;
    for (int i = 0; i < n; i++)
    {
        if (mp[v[i]])
            res += mp [v[i]];
        else
            res += c;
    }

    cout << res << endl;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
