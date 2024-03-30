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

    set<ll> s;
    ll ans = 0, maxi = 0;
    for (int i = 0; i < n; i++)
    {
        if (s.empty())
        {
            s.insert(a[i]);
            ans++;
            maxi = max(maxi, ans);
        }
        else if (s.find(a[i]) == s.end())
        {
            s.insert(a[i]);
            ans++;
            maxi = max(maxi, ans);
        }
        else
        {
            ans--;
            s.erase(s.find(a[i]));
        }
    }

    cout << maxi << endl;
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
