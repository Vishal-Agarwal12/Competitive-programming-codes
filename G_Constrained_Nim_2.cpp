#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n, l, r;
    cin >> n >> l >> r;

    ll a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    ll res = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] >= r)
        {
            res += a[i] / r;
            a[i] = a[i] % r;
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (a[i] >= l)
        {
            res++;
        }
    }

    if (res % 2 == 0)
        cout << "Second\n";
    else
        cout << "First\n";
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
