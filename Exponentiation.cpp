#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int MOD = 1000000007;

long long powerMod(long long a, long long b)
{
    long long result = 1;
    while (b > 0)
    {
        if (b % 2 == 1)
            result = (result * a) % MOD;
        a = (a * a) % MOD;
        b /= 2;
    }
    return result;
}

void solve()
{
    long long a, b;
    cin >> a >> b;
    long long result = powerMod(a, b);
    cout << result << endl;
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
