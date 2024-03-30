#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool compare(const pair<int, int> &a, const pair<int, int> &b)
{
    if (a.first == b.first)
    {
        return a.second < b.second;
    }
    return a.first > b.first;
}

void solve()
{
    ll n, m, h;
    cin >> n >> m >> h;

    ll sum = 0, x, cnt = 0, score = 0, tot = 0;
    vector<pair<ll, ll>> v;
    ll pen = 0;

    for (int i = 0; i < n; i++)
    {
        sum = 0, cnt = 0, tot = 0;
        vector<ll> a;

        for (int j = 0; j < m; j++)
        {
            cin >> x;
            a.push_back(x);
        }

        sort(a.begin(), a.end());
        for (int j = 0; j < m; j++)
        {
            if (sum + a[j] <= h)
            {
                cnt++;
                sum += a[j];
                tot += sum;
            }
        }
        if (i == 0)
        {
            pen = tot;
            score = cnt;
        }

        if (i != 0)
            v.push_back({cnt, tot});
    }

    sort(v.begin(), v.end(), compare);

    for (int i = 0; i < n - 1; i++)
    {
        if (v[i].first < score)
        {
            cout << i + 1 << endl;
            return;
        }
        else if (v[i].first == score && (pen < v[i].second || pen == v[i].second))
        {
            cout << i + 1 << endl;
            return;
        }
    }
    cout << n << endl;
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
