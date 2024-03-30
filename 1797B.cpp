#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;

    vector a(n, vector<int>(n));

    for (auto &row : a)
    {
        for (int &x : row)
        {
            cin >> x;
        }
    }

    int cnt = 0;

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            cnt += a[i][j] != a[n - 1 - i][n - 1 - j];
        }
    }

    cnt /= 2;

    cout << (cnt <= k && (cnt % 2 == k % 2 || n % 2 == 1) ? "YES\n" : "NO\n");
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
