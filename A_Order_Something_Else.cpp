#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n, p, q;
    cin >> n >> p >> q;

    ll a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    sort(a,a+n);

    cout << min(a[0]+q, p) << endl;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
