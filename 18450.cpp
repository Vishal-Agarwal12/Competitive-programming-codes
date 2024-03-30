#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n, k, x;
    cin >> n >> k >> x;

    bool fg = false;
    vector<ll> v;

    if (x != 1)
    {
        cout << "YES" << endl;
        cout << n << endl;
        for (int i = 0; i < n; i++)
            cout << 1 << " ";
        cout << endl;
        return;
    }

    ll temp = k;
    while (n > 0)
    {
        while (n >= temp && temp != x)
        {
            n = n -temp;
            v.push_back(k);
            if (n == 0)
            {
                fg = 1;
                break;
            }
        }
        while (temp > n || temp == x)
            k--;
        if (k <= 0)
            break;
        if (n > 0 && temp == 1 && temp == x)
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
