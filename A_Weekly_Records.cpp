#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n;
    cin >> n;

    ll sum = 0, x;
    for (int i = 0; i < n * 7 + 1; i++)
    {
        cin >> x;
        if (i % 7 == 0 && i != 0)
        {
            cout << sum << " ";
            sum = 0;
        }
        sum += x;
    }
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
