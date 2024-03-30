#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    ll x = n - 1;
    ll b[x];
    for (int i = 0; i < x; i++)
        cin >> b[i];

    vector<ll> a(n);

    a[0] = b[0];
    for (int i = 1; i < x; i++)
    {
        if (b[i] >= a[i - 1])
            a[i] = b[i-1];
        else if (b[i] < a[i - 1])
            a[i] = b[i];
    }

    if (a[n - 1] == b[x - 1])
    {
        a[n - 1] = 0;
    }
    else
        a[n - 1] = b[x - 1];

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
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
