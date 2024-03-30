#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n, k, x;
    cin >> n >> k >> x;

    bool fg = false;
    vector<ll> v;

    // if (x != 1)
    // {
    //     cout << "YES" << endl;
    //     cout << n << endl;
    //     for (int i = 0; i < n; i++)
    //         cout << 1 << " ";
    //     cout << endl;
    //     return;
    // }

    while (n > 0)
    {
        while (n >= k && k != x)
        {
            n = n - k;
            v.push_back(k);
            if (n == 0)
            {
                fg = 1;
                break;
            }
        }
        while (k > n || k == x)
            k--;
        if (k <= 0)
            break;
        if (n > 0 && k == 1 && k == x)
            break;
    }

    if (fg)
    {
        cout << "YES" << endl;
        cout << v.size() << endl;
        for (auto x : v)
            cout << x << " ";
        cout << endl;
    }
    else
        cout << "NO" << endl;
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