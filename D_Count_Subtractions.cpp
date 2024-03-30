#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll a, b, cnt = 0;
    cin >> a >> b;

    if (b > a)
        swap(a, b);
    while (b > 0)
    {
        cnt += a / b;
        a = a % b;
        if (b > a)
            swap(a, b);
    }
    cout << cnt - 1 << endl;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
