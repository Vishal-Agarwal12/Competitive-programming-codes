#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    set<ll> s;
    vector<pair<ll, ll>> v;

    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        v.push_back({x, i + 1});
    }

    s.insert(v[0].first);

    for (int i = 1; i < n; i++)
    {
        if (s.find(v[i].second) == s.end())
        {
            s.insert(v[i].first);
        }
        else
            continue;
    }

    cout << n - s.size() << endl;
    for (int i = 1; i <= n; i++)
    {
        if (s.find(i) == s.end())
        {
            cout << i << " ";
        }
    }
    cout << endl;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
