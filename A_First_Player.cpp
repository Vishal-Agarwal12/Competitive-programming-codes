#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<pair<string, ll>> v;
    for (int i = 0; i < n; i++)
    {
        string s;
        ll x;
        cin >> s >> x;
        v.push_back({s, x});
    }
    ll mn = 1e9;
    for (int i = 0; i < n; i++)
    {
        mn = min(mn, v[i].second);
    }

    ll te = 0;
    for (int i = 0; i < n; i++)
    {
        if (mn == v[i].second)
        {
            te = i;
            break;
        }
    }

    for (int i = te; i < n; i++)
    {
        cout << v[i].first << endl;
    }
    for (int i = 0; i < te; i++)
    {
        cout << v[i].first << endl;
    }
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
