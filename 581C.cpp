#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n, k, temp = 0;
    cin >> n >> k;

    vector<pair<ll, ll>> v;
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        if (x % 10 == 0)
            v.push_back({100 - x, x});
        else
            v.push_back({10 - x % 10, x});
    }

    sort(v.begin(), v.end());

    for (int i = 0; i < n; i++)
    {
        if (k <= 0)
            break;
        else if (v[i].first <= k)
        {
            v[i].second += v[i].first;
            k -= v[i].first;
        }
    }
    if(k) {
        for(int i=0;i<n;i++) {
            if (k >= 100 - v[i].second)
            {
                k -= (100 - v[i].second);
                v[i].second = 100;
            }
            else {
                v[i].second+=k;
                k=0;
                break;
            }
        }
    }
    ll res = 0;
    for (int i = 0; i < n; i++)
    {
        res += (v[i].second / 10);
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
