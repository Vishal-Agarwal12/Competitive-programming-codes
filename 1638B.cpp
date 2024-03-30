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
        cout << "Yes" << endl;
        return;
    }
    vector<ll> od, ev;
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
            ev.push_back(a[i]);
        else
            od.push_back(a[i]);
    }

    for (int i = 1; i < ev.size(); i++)
    {
        if (ev[i] < ev[i - 1])
        {
            cout << "No" << endl;
            return;
        }
    }
    for (int i = 1; i < od.size(); i++)
    {
        if (od[i] < od[i - 1])
        {
            cout << "No" << endl;
            return;
        }
    }

    cout << "Yes" << endl;
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
