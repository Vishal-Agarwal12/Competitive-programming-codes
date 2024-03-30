#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n;
    cin >> n;

    ll a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    ll mx = 0, ng = 0, ps = 0, pc = 0, nc = 0, id = 0;
    for (int i = 0; i < n; i++)
    {
        if (abs(a[i]) > mx)
        {
            mx = abs(a[i]);
            id = i;
        }
        if (a[i] > 0)
            pc++;
        else
            nc++;
    }

    vector<pair<ll, ll>> v;
    if (pc >= 13)
    {
        for (int i = 0; i < n; i++)
        {
            if (a[i] > 0)
            {
                id = i;
                while (a[i] < 20)
                {
                    a[i] += a[i];
                    v.push_back({i + 1, i + 1});
                }
                break;
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (a[i] < 0)
            {
                a[i] += a[id];
                v.push_back({i + 1, id + 1});
            }
        }
        for (int i = 2; i <= n; i++)
        {
            v.push_back({i, i - 1});
        }
    }

    else if (nc >= 13)
    {
        for (int i = 0; i < n; i++)
        {
            if (a[i] < 0)
            {
                id = i;
                while (a[i] > -20)
                {
                    a[i] -= abs(a[i]);
                    v.push_back({i + 1, i + 1});
                }
                break;
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (a[i] > 0)
            {
                a[i] += a[id];
                v.push_back({i + 1, id + 1});
            }
        }
        for (int i = n - 1; i >= 1; i--)
        {
            v.push_back({i, i + 1});
        }
    }

    else {
        if (a[id] < 0)
        {
            for (int i = 0; i < n; i++)
            {
                if (a[i] > 0)
                {
                    a[i] += a[id];
                    v.push_back({i + 1, id + 1});
                }
            }
            for (int i = n - 1; i >= 1; i--)
            {
                v.push_back({i, i + 1});
            }
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                if (a[i] < 0)
                {
                    a[i] += a[id];
                    v.push_back({i + 1, id + 1});
                }
            }
            for (int i = 2; i <= n; i++)
            {
                v.push_back({i, i - 1});
            }
        }
    }

    
    // Jai Shree Ram
    cout << v.size() << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i].first << " " << v[i].second << endl;
    }
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
