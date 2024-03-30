#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll findIndexGreaterThan(const std::vector<ll> &sortedVector, ll target)
{
    auto it = std::upper_bound(sortedVector.begin(), sortedVector.end(), target);
    if (it != sortedVector.end())
    {
        return std::distance(sortedVector.begin(), it);
    }
    return -1;
}

void solve()
{
    ll n;
    cin >> n;
    ll a[n];
    for (ll i = 0; i < n; i++)
        cin >> a[i];

    vector<ll> sid, eid;
    unordered_map<ll, ll> m1, m2;
    for (ll i = 0; i < n - 1; i++)
    {
        if (m1.find(a[i]) == m1.end())
        {
            sid.push_back(i);
            m1[a[i]]++;
        }
    }
    for (ll i = n - 1; i > 0; i--)
    {
        if (m2.find(a[i]) == m2.end())
        {
            eid.push_back(i);
            m2[a[i]]++;
        }
    }

    ll sz = eid.size(), ans = 0;
    sort(eid.begin(), eid.end());
    for (ll i = 0; i < sid.size(); i++)
    {
        ans += ((findIndexGreaterThan(eid, sid[i]) >= 0) ? sz - i : continue);
    }

    cout << ans << endl;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
