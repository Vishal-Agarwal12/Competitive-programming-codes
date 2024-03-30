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

    ll odd = 0, even = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0 && a[i] > 0)
            even++;
        else if (a[i] % 2 == 1 && a[i] > 0)
            odd++;
        else if (a[i] <= 0)
        {
            cout << "No\n";
            return;
        }
    }

    if (even == n || odd == n)
    {
        cout << "Yes\n";
        return;
    }

    sort(a, a + n);
    ll x = 0, y = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            x = a[i];
            break;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 1)
        {
            y = a[i];
            break;
        }
    }

    if (x - y <= 0)
    {
        cout << "No\n";
    }
    else
        cout << "Yes\n";
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