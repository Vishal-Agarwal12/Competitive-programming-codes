#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
    }

    cout << 3 * n << endl;
    for (int i = 1; i <= n; i += 2)
    {
        cout << 1 << " " << i << " " << i + 1 << endl;
        cout << 2 << " " << i << " " << i + 1 << endl;
        cout << 1 << " " << i << " " << i + 1 << endl;
        cout << 2 << " " << i << " " << i + 1 << endl;
        cout << 1 << " " << i << " " << i + 1 << endl;
        cout << 2 << " " << i << " " << i + 1 << endl;
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
