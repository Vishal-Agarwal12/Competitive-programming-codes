#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n;
    cin >> n;

    if (n <= 1e3 - 1)
        cout << n << endl;
    else if (n >= 1e3 && n <= 1e4 - 1)
        cout << n - n % 10 << endl;
    else if (n >= 1e4 && n <= 1e5 - 1)
        cout << n - n % 100 << endl;
    else if (n >= 1e5 && n <= 1e6 - 1)
        cout << n - n % 1000 << endl;
    else if (n >= 1e6 && n <= 1e7 - 1)
        cout << n - n % 10000 << endl;
    else if (n >= 1e7 && n <= 1e8 - 1)
        cout << n - n % 100000 << endl;
    else if (n >= 1e8 && n <= 1e9 - 1)
        cout << n - n % 1000000 << endl;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
