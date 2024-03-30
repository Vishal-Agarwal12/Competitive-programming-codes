#include <bits/stdc++.h>
#define ll int
using namespace std;

void solve()
{
    ll n;
    cin >> n;

    if (n <= 6)
    {
        cout << "NO" << endl;
        return;
    }

    ll sum = 0;
    for (ll i = 2; i < n; i++)
    {
        sum = 0;
        for (ll j = 1; j * j < n; j++)
        {
            sum += (i << j);
            if (sum + 1 == n)
            {
                cout << "YES" << endl;
                return;
            }
            else if (sum + 1 > n)
                break;
        }
    }
    cout << "NO" << endl;
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
