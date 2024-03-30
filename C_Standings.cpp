#include <bits/stdc++.h>
#define ll double
using namespace std;

bool compare(const pair<ll, ll> &a, const pair<ll, ll> &b)
{
    if (a.second != b.second)
    {
        return a.second > b.second;
    }
    return a.first < b.first;
}

void solve()
{
    ll n;
    cin >> n;

    vector<pair<ll, ll>> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i].first >> v[i].second;
    }

    vector<pair<ll, ll>> vp(n);
    for (int i = 0; i < n; i++)
    {
        vp[i].first = i + 1;
        if (v[i].first == 0)
            vp[i].second = 0;
        else
            vp[i].second = v[i].first / (v[i].first + v[i].second);
    }

    sort(vp.begin(), vp.end(), compare);

    for (int i = 0; i < n; i++)
    {
        cout << vp[i].first << " ";
    }
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
