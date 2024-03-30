#include <bits/stdc++.h>
#define ll int
using namespace std;

void solve()
{
    ll n;
    cin >> n;

    ll a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    multiset<ll> mst;
    for (auto x : a)
        mst.insert(x);

    vector<ll> ans;
    while (mst.size() && *mst.begin() == 0)
    {
        ll mex = 0;
        while (mst.find(mex) != mst.end())
        {
            mst.erase(mst.find(mex));
            mex++;
        }
        ans.push_back(mex);
    }

    for (int i = 0; i < mst.size(); i++)
        ans.push_back(0);

    cout << ans.size() << endl;
    for (auto x : ans)
        cout << x << " ";
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
