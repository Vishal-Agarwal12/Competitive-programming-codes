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

    vector<ll> v;
    ll sum = a[0] + a[1] + a[2];
    if ((3 - sum % 3) == 3)
        v.push_back(0);
    else
        v.push_back(3 - sum % 3);

    for (int i = 3; i < n; i++)
    {
        sum = sum + a[i] - a[i - 3];
        if ((3 - sum % 3) == 3)
            v.push_back(0);
        else
            v.push_back(3 - sum % 3);
    }

    // for (auto x : v)
    // {
    //     cout << x << " ";
    // }
    // cout << endl;

    ll mx = 0, ans = 0;
    for (int i = 0; i < v.size(); i++)
    {
        mx = max(mx, v[i]);
        if ((i + 1) % 3 == 0)
        {
            ans += mx;
            mx = 0;
        }
    }
    if(mx<=2)
    ans += mx;

    cout << ans << endl;
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
