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

    set<ll> s;
    for (auto x : a)
        s.insert(x);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (s.find(a[i] - a[j]) != s.end())
            {
                cout << a[i] << endl;
                return;
            }
            if (s.find(a[j] - a[i]) != s.end())
            {
                cout << a[j] << endl;
                return;
            }
        }
    }
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
