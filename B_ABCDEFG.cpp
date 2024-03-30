#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    char p, q;
    cin >> p >> q;
    ll a[7] = {0, 3, 4, 8, 9, 14, 23};
    if (p > q)
        swap(p, q);

    ll x = p - 'A';
    ll y = q - 'A';

    cout << a[y - 1] - a[x - 1] << endl;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // int t;
    // cin>>t;
    // while(t--)
    solve();

    return 0;
}
