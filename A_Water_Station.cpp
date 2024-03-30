#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n;
    cin >> n;

    if (n % 5 >= 3)
        cout << 10 * (n / 10) + 5 << endl;
    else
        cout << 10 * (n / 10) << endl;
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
