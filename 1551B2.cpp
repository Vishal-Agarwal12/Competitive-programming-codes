#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;

    unordered_map<ll, vector<ll>> mp;
    vector<ll> ans(n, 0);
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        mp[x].push_back(i);
    }
    ll cnt = 0;
    for (auto x : mp)
    {
        if (x.second.size() < k)
            cnt += x.second.size();
    }
    cnt = cnt - cnt % k;

    ll id = 1, id2 = 1;
    for (auto x : mp)
    {
        id = 1;
        if (x.second.size() >= k)
        {
            for (ll i = 0; i < k; i++)
            {
                ans[x.second[i]] = id;
                id++;
            }
        }
        else
        {

            if (id2 > k)
                id2 = 1;
            for (ll i = 0; i < x.second.size(); i++)
            {

                if (cnt <= 0)
                {
                    ans[x.second[i]] = 0;
                }
                else
                {
                    if (id2 > k)
                        id2 = 1;
                    ans[x.second[i]] = id2;
                    id2++;
                }
                cnt--;
            }
        }
    }
    for (int i = 0; i < n; i++)
        cout << ans[i] << " ";
    cout << endl;
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
