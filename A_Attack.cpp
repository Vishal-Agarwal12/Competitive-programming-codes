#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll a, b;
    cin >> a >> b;

    if (a % b == 0)
        cout << a / b << endl;
    else
        cout << a / b + 1 << endl;
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
