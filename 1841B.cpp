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
        cout << 1 << endl;
        return;
    }

    vector<ll> v;
    string s = "1";
    ll id = n, elem = -1;
    v.push_back(a[0]);
    for (int i = 1; i < n; i++)
    {
        if (a[i] >= v.back())
        {
            v.push_back(a[i]);
            s += "1";
        }
        else if (a[i] <= a[0])
        {
            elem = a[i];
            id = i;
            break;
        }
        else
            s += "0";
    }

    for (int i = id; i < n; i++)
    {
        if (a[i] <= v[0] && a[i] >= elem)
        {
            s += "1";
            elem = a[i];
        }
        else
            s += "0";
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