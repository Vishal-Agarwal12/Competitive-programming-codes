#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n;
    cin >> n;

    map<ll, ll> mp;
    set<ll> s;
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        mp[x]++;
        s.insert(x);
    }

    vector<ll> v;
    for (auto y : mp)
    {
        v.push_back(y.second);
    }

    for (int i = 1; i < v.size(); i++)
    {
        if (v[i] > v[i - 1])
        {
            cout << "NO" << endl;
            return;
        }
    }

    vector<ll> c;
    for (auto z : s)
    {
        c.push_back(z);
    }

    for (int i = 0; i < c.size(); i++)
    {
        if (c[i] != i)
        {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
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
