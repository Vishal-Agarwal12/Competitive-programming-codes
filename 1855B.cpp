#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;

    ll cnt = 0, mx = 0;
    for (ll i = 1; i <= min(n, (ll)10000); i++)
    {
        if (n % i == 0)
        {
            cnt++;
            mx = max(mx, cnt);
        }
        else
        {
            mx = max(mx, cnt);
            cnt = 0;
        }
    }

    cout << mx << endl;
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
