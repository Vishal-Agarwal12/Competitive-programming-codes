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

    if (n == 1)
    {
        cout << a[0] << endl;
        return;
    }

    ll maxi = -1e10, cnt1 = 0, cnt2 = 0;
    for (int i = 0; i < n; i++)
    {
        maxi = max(a[i], maxi);
    }

    if(maxi<=0) {
        cout<<maxi<<endl;
        return;
    }

    for (int i = 0; i < n; i += 2)
    {
        if (a[i] > 0)
            cnt1 += a[i];
    }

    for (int i = 1; i < n; i += 2)
    {
        if (a[i] > 0)
            cnt2 += a[i];
    }

    cout << max({cnt1, cnt2, maxi}) << endl;
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
