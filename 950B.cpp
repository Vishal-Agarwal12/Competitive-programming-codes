#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n, m;
    cin >> n >> m;

    ll a[n], b[m];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < m; i++)
        cin >> b[i];

    ll l = 0, r = 0, s1 = a[0], s2 = b[0], ans = 0;
    while (l < n && r < m)
    {
        if (s1 == s2)
        {
            ans++;
            l++;
            r++;
            s1 += a[l];
            s2 += b[r];
        }
        else if (s1 < s2)
        {
            l++;
            s1 += a[l];
        }
        else
        {
            r++;
            s2 += b[r];
        }
    }
    cout << ans << endl;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
