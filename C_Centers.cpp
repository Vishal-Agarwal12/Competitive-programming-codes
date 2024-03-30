#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    ll a[3 * n];
    vector<ll> ans;
    unordered_map<ll, ll> mp;

    for (int i = 0; i < 3 * n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < 3 * n; i++)
    {
        if (mp[a[i]] == 1)
        {
            ans.push_back(a[i]);
            mp[a[i]]++;
        }
        else
            mp[a[i]]++;
    }

    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
    }
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
