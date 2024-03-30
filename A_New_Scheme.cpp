#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll a[8];
    for (int i = 0; i < 8; i++)
        cin >> a[i];

    if (a[0] < 100)
    {
        cout << "No" << endl;
        return;
    }
    if (a[0] % 25 != 0)
    {
        cout << "No" << endl;
        return;
    }
    if (a[7] > 675)
    {
        cout << "No" << endl;
        return;
    }
    for (int i = 1; i < 8; i++)
    {
        if (a[i] < a[i - 1] || a[i] % 25 != 0)
        {
            cout << "No" << endl;
            return;
        }
    }
    cout << "Yes" << endl;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
