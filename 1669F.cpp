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

    ll l = 0, r = n - 1;
    ll maxi = 0, s1 = a[0], s2 = a[n - 1];
    while (l < r)
    {
        if (s1 == s2)
        {
            maxi = max(maxi, n - r + l + 1);
            l++;
            s1 += a[l];
        }
        else if (s1 < s2)
        {
            l++;
            s1 += a[l];
        }
        else
        {
            r--;
            s2 += a[r];
        }
    }

    cout << maxi << endl;
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
