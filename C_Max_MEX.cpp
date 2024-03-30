#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n, k, i = 0;
    cin >> n >> k;
    ll a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    sort(a, a + n);
    unique(a, a + n);
    for (i = 0; i < k; i++)
    {
        if (a[i] != i)
        {
            cout << i << endl;
            return;
        }
    }
    cout << i << endl;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
