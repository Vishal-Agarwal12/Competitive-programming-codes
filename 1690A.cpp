#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n;
    cin >> n;

    if (n % 3 == 0)
    {
        cout << n / 3 << " " << n / 3 + 1 << " " << n - n / 3 - n / 3 - 1 << endl;
    }
    else
    {
        if (n / 3 + 2 + n / 3 + 1 == n)
            cout << n / 3 << " " << n / 3 + 2 << " " << n - n / 3 - n / 3 - 2 << endl;
        else
            cout << n / 3 + 1 << " " << n / 3 + 2 << " " << n - n / 3 - n / 3 - 3 << endl;
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
