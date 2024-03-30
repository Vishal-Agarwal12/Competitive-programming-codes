#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n, s;
    cin >> n >> s;

    cout << s / (n * n) << endl;
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
