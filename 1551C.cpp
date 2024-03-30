#include <bits/stdc++.h>
#define ll int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    ll a[n][5]={};
    string s;
    vector<ll> sz;
    for (ll i = 0; i < n; i++)
    {
        cin >> s;
        sz.push_back(s.size());
        for (auto x : s)
        {
            a[i][x - 'a']++;
        }
    }

    ll maxi = 0;

    for (char ch = 'a'; ch <= 'e'; ch++)
    {

        ll sum = 0, cnt = 0;
        vector<ll> v(n);
        for (ll i = 0; i < n; i++)
        {
            v[i] = (2 * (a[i][ch - 'a']) - sz[i]);
        }
        sort(v.begin(), v.end(), greater<>());
        for (int i = 0; i < n; i++)
        {
            if (sum + v[i] > 0)
            {
                sum += v[i];
                cnt++;
            }
            else
                break;
        }

        maxi = max(maxi, cnt);
    }

    cout << maxi << endl;
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
