#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n;
    cin >> n;

    ll a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    ll one = 0, two = 0, mx = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 1)
            one = i + 1;
        else if (a[i] == 2)
            two = i + 1;
        else if (a[i] == n)
            mx = i + 1;
    }

    if ((mx > one && mx < two) || (mx > two && mx < one))
        cout << 1 << " " << 1 << endl;
    else if (mx < one)
    {
        cout << mx << " " << min(one, two) << endl;
    }
    else if (mx > one)
    {
        cout << mx << " " << max(one, two) << endl;
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
