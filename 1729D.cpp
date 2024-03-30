#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    ll a[n], b[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        cin >> b[i];

    ll c[n];
    for (int i = 0; i < n; i++)
        c[i] = b[i] - a[i];

    sort(c, c + n);
    ll l = 0, r = n - 1, cnt = 0;
    while (l < r)
    {
        if (c[l] + c[r] >= 0)
        {
            cnt++;
            l++;
            r--;
        }
        else
            l++;
    }

    cout << cnt << endl;
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
