#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n, q;
    cin >> n >> q;

    vector<ll> a(n + 1);
    set<ll> s;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }

    ll sum = 0;
    for (auto z : a)
        sum += z;

    ll prev = 1, k;
    while (q--)
    {
        ll tt;
        cin >> tt;
        if (tt == 1)
        {
            ll x, y;
            cin >> x >> y;
            if (prev == 1)
            {
                sum += y - a[x];
                a[x] = y;
                cout << sum << endl;
            }
            else if (prev == 2)
            {
                if (y == k)
                {
                    cout << sum << endl;
                }
                else if (!s.empty() && s.find(x) != s.end())
                {
                    sum += (y - a[x]);
                    a[x] = y;
                    cout << sum << endl;
                }
                else
                {
                    sum += (y - k);
                    a[x] = y;
                    s.insert(x);
                    cout << sum << endl;
                }
            }
        }
        else
        {
            cin >> k;
            sum = k * n;
            prev = 2;
            s.clear();
            cout << sum << endl;
        }
    }
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
