#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    ll a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    ll cnt = 0, m = 0, fg = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] <= 0)
        {
            if (a[i] < 0)
                fg = 1;
            m++;
        }
        else
        {
            if (m > 0 && fg == 1)
                cnt++;
            m = 0;
            fg = 0;
        }
    }
    if (m > 0 && fg == 1)
        cnt++;

    ll res = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] < 0)
            res += (-a[i]);
        else
            res += a[i];
    }

    cout << res << " " << cnt << endl;
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
