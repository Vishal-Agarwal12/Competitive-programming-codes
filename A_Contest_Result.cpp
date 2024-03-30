#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    int n, m;
    cin >> n >> m;
    int a[n], b[m];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < m; i++)
        cin >> b[i];

    int sum = 0;
    for (int i = 0; i < m; i++)
    {
        sum += a[b[i] - 1];
    }
    cout << sum << endl;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
