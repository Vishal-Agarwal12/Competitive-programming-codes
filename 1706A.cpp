#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n, m;
    cin >> n >> m;

    ll a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    string s = "";
    for (int i = 0; i < m; i++)
    {
        s += 'B';
    }

    for (int i = 0; i < n; i++)
    {
        ll mn  = min(a[i]-1, m-a[i]);
        ll mx = max(a[i]-1, m-a[i]);
        if (s[mn] == 'B')
            s[mn] = 'A';
        else
            s[mx] = 'A';
    }

    cout << s << endl;
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
