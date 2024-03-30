#include <bits/stdc++.h>
#define ll unsigned long long
using namespace std;

void solve()
{
    ll n, m;
    cin >> n >> m;

    while (n >= 2 * m || m >= 2 * n)
    {
        if (n == 0 || m == 0)
        {
            break;
        }

        else if (n >= 2 * m)
        {
            n %= 2 * m;
        }
        else
        {
            m %= 2 * n;
        }
    }

    cout << n << " " << m << endl;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
