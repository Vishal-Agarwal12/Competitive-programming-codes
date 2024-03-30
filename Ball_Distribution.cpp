#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n, m;
    cin >> n >> m;

    ll a[m];
    for (int i = 0; i < m; i++)
        cin >> a[i];

    sort(a, a + m);
    ll result = 0;
    for (int i = 0; i < m; i++)
    {
        result += (n-a[i]);
        if (n - result < 0)
        {
            cout << 0 << endl;
            return;
        }
    }

    cout << n - result << endl;
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
