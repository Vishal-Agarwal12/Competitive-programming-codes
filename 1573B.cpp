#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n;
    cin >> n;

    ll a[n], b[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        cin >> b[i];

    if(a[0]<b[0]) {
        cout<<0<<endl;
        return;
    }
    ll p1 = n - 1;
    for (int i = 0; i < n; i++)
    {
        if (a[i] < b[0])
        {
            p1 = i;
            break;
        }
    }
    ll p2 = n - 1;
    for (int i = 0; i < n; i++)
    {
        if (b[i] > a[0])
        {
            p2 = i;
            break;
        }
    }
    ll p3 = 1e6;
    for (int i = 0; i < n; i++)
    {
        if (a[i] < b[i])
        {
            p3 = i;
            break;
        }
    }

    cout << min({p1, p2, 2 * p3}) << endl;
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
