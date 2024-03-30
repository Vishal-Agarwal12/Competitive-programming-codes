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

    if (n <= 4)
    {
        ll cnt = 0;
        for (int i = 1; i < n - 1; i++)
        {
            if (a[i] > a[i - 1] && a[i] > a[i + 1])
            {
                a[i] = max(a[i - 1], a[i + 1]);
                cnt++;
            }
        }

        cout << cnt << endl;
        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
        return;
    }

    set<ll> s;
    for (int i = 1; i < n - 1; i++)
    {
        if (a[i] > a[i - 1] && a[i] > a[i + 1])
        {
            s.insert(i);
        }
    }
    ll c = 0;

    for (int i = 2; i < n - 2; i++)
    {
        if (s.find(i - 1) != s.end() && s.find(i + 1) != s.end())
        {
            a[i] = max(a[i - 1], a[i + 1]);
            c++;
            s.erase(i + 1);
        }
    }

    for (int i = 1; i < n - 1; i++)
    {
        if (a[i] > a[i - 1] && a[i] > a[i + 1])
        {
            c++;
            a[i + 1] = a[i];
        }
    }

    cout << c << endl;
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
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
