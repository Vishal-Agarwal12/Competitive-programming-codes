#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;

    if (n < k)
    {
        cout << 1 << endl;
        cout << n << endl;
        return;
    }
    else if (n == k)
    {
        cout << 2 << endl;
        cout << 1 << " " << n - 1 << endl;
        return;
    }
    else if (n > k)
    {
        if (n % k != 0)
        {
            cout << 1 << endl;
            cout << n << endl;
        }
        else
        {
            cout << 2 << endl;
            cout << 1 << " " << n - 1 << endl;
        }
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
