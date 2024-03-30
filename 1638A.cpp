#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n;
    cin >> n;

    ll a[n];
    ll pos = n - 1;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (a[i] != i + 1)
        {
            pos = i;
            break;
        }
    }

    if (pos == n - 1)
    {
        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
        return;
    }

    ll mn = 1e5, id = -1;
    for (int i = pos; i < n; i++)
    {
        if (a[i] < mn)
        {
            mn = a[i];
            id = i;
        }
    }

    ll temp = id;
    for (int i = pos; i <= (id - pos) / 2 + pos; i++)
    {
        swap(a[i], a[temp]);
        temp--;
    }
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
