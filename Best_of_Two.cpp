#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll a[3], b[3];
    for (int i = 0; i < 3; i++)
        cin >> a[i];
    for (int i = 0; i < 3; i++)
        cin >> b[i];

    sort(a, a + 3);
    sort(b, b + 3);

    ll x = a[1] + a[2];
    ll y = b[1] + b[2];

    if (x == y)
    {
        cout << "Tie" << endl;
    }
    else if (x > y)
        cout << "Alice" << endl;
    else
        cout << "Bob" << endl;
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
