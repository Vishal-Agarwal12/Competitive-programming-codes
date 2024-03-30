#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n0, n1, n2;
    cin >> n0 >> n1 >> n2;

    int curr = 1;
    if (n1 == 0)
    {
        if (n0)
        {
            cout << string(n0 + 1, '0') << endl;
        }
        else
            cout << string(n2 + 1, '1') << endl;
    }
    else
    {
        cout << string(n0 + 1, '0') << string(n2 + 1, '1');
        --n1;
        curr = 0;
        while (n1--)
        {
            cout << curr;
            curr ^= 1;
        }
        cout << endl;
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
