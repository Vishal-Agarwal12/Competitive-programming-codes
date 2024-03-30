#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n, a, b, x, y, area, maxi = 0;
    cin >> n >> a >> b;
    area = a * b;
    vector<pair<ll, ll>> v;
    for (int i = 0; i < n; i++)
    {
        cin >> x >> y;
        if (x > y)
            swap(x, y);
        v.push_back({x, y});
    }
    sort(v.begin(), v.end());

    if (a > b)
        swap(a, b);

    for (int i = 0; i < n - 1; i++)
    {
        if (v[i].first <= a && v[i].second <= b)
        {
            ll ar = v[i].first * v[i].second;
            for (int j = i + 1; j < n; j++)
            {
                if (v[j].first <= a  && v[j].second <= b)
                {
                    ll ar2 = v[j].first * v[j].second;
                    if (area - ar2 >= ar)
                    {
                        maxi = max(maxi, ar + ar2);
                    }
                    continue;
                }
                swap(v[j].first, v[j].second);
                if (v[j].first <= a - v[i].first && v[j].second <= b ||
                    v[j].first <= a && v[j].second <= b - v[i].second)
                {
                    ll ar2 = v[j].first * v[j].second;
                    if (area - ar2 >= ar)
                    {
                        maxi = max(maxi, ar + ar2);
                    }
                }
            }
        }
    }
    cout << maxi << endl;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
