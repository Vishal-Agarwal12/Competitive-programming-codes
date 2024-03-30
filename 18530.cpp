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

    for (int i = 1; i < n; i++)
    {
        if (a[i] < a[i - 1])
        {
            cout << 0 << endl;
            return;
        }
    }

    ll mn = 1e10;
    for (int i = 1; i < n; i++)
    {
        mn = min(mn, a[i] - a[i - 1]);
    }

    if (mn % 2 == 0)
    {
        cout << mn / 2 + 1 << endl;
    }
    else
        cout << (mn + 1) / 2 << endl;
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
