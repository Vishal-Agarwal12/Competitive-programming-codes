#include <bits/stdc++.h>
#define ll int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    ll a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    vector<ll> v;
    v.push_back(a[0]);
    for(int i=1;i<n;i++) {
        if(a[i]!=a[i-1]) {
            v.push_back(a[i]);
        }
    }

    ll ans = v.size();

    for (int i = 1; i < v.size() - 1; i++)
    {
        if (v[i] > v[i - 1] && v[i] < v[i + 1])
        {
            ans--;
        }
        else if (v[i] < v[i - 1] && v[i] > v[i + 1])
        {
            ans--;
        }
    }

    cout << ans << endl;
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
