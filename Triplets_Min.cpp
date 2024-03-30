#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll f(const std::vector<ll> &sortedVector, ll target)
{
    auto it = std::lower_bound(sortedVector.begin(), sortedVector.end(), target);
    if (it != sortedVector.end())
    {
        return std::distance(sortedVector.begin(), it);
    }
    return -1;
}

void solve()
{
    ll n, q;
    cin >> n >> q;
    ll a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    sort(a, a + n);
    ll x = n - 2;
    vector<ll> v(n - 2);
    for (int i = 0; i < n-2; i++)
    {
        v[i] = x * (x + 1) / 2;
        x--;
    }

    vector<ll> pre(n - 2);
    pre[0] = v[0];
    for (int i = 1; i < n - 2; i++)
    {
        pre[i] = pre[i - 1] + v[i];
    }

    while (q--)
    {
        ll z;
        cin >> z;
        ll res = f(pre, z);
        cout << a[res] << endl;
    }
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
