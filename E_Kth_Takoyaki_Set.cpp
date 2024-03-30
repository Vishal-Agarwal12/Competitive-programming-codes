#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;

    ll a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    multiset<ll> s;
    s.insert(0);
    while (k--)
    {
        ll x = *s.begin();
        s.erase(*s.begin());
        for (int i = 0; i < n; i++)
        {
            s.insert(a[i] + x);
        }
    }

    cout << *s.begin();
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
