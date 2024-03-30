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

    sort(a, a + n);
    set<ll> s;
    for (int i = 0; i < n; i++)
        s.insert(a[i]);

    for (int i = 1; i < n - 1; i++)
    {
        if (s.find(a[0] + a[n - 1] + a[i]) == s.end())
        {
            cout << "NO" << endl;
            return;
        }
    }
    for (int i = 2; i < n; i++)
    {
        if (s.find(a[0] + a[1] + a[i]) == s.end())
        {
            cout << "NO" << endl;
            return;
        }
    }
    for (int i = 0; i < n - 2; i++)
    {
        if (s.find(a[n - 2] + a[n - 1] + a[i]) == s.end())
        {
            cout << "NO" << endl;
            return;
        }
    }

    cout << "YES" << endl;
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
