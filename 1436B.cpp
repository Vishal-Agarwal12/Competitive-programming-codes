#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n;
    cin >> n;

    ll a[n];
    for (ll i = 0; i < 2; i++)
    {
        a[i] = 1;
    }
    for (ll i = 2; i < n; i++)
    {
        a[i] = 0;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < i + n; j++)
        {
            cout << a[j % n] << " ";
        }
        cout << endl;
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
