#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n, m;
    cin >> n >> m;
    ll a[n * m];
    for (int i = 0; i < n * m; i++)
    {
        cin >> a[i];
    }

    ll size = n * m;
    sort(a, a + size);
    if (n > m)
        swap(n, m);
    ll max1 = a[size - 1];
    ll min1 = a[0];
    ll min2 = a[1];

    ll s = (m - 1) * n;

    ll ans1 = s * (max1 - min1);
    ans1 += (max1 - min2) * (n - 1);

    max1 = a[size - 1];
    ll max2 = a[size - 2];
    min1 = a[0];
    ll ans2 = s * (abs(max1 - min1));
    ans2 += (abs(max2 - min1)) * (n - 1);

    cout << max(ans1, ans2) << endl;
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
