#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n;
    cin >> n;

    for (int i = 1; i <= n / 2; i++)
    {
        cout << 2 * i << " ";
    }
    cout << 1 << " ";
    if(n%2==0) {
        for (int i = n - 1; i > 2; i -= 2)
        {
            cout << i << " ";
        }
        cout << endl;
    }
    else {
        for (int i = n; i > 2; i -= 2)
        {
            cout << i << " ";
        }
        cout << endl;
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
