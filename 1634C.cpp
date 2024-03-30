#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;
    if (n & 1 && k > 1)
    {
        cout << "NO\n";
        return;
    }
    cout << "YES\n";
    int cur = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < k; j++)
        {
            cout << cur << ' ';
            if (cur + 2 <= n * k)
                cur += 2;
            else
                cur = 2;
        }
        cout << '\n';
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
