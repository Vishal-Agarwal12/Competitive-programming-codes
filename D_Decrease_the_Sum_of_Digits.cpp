#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll sum(ll n)
{
    ll sum_digit = 0;
    while (n > 0)
    {
        sum_digit += n % 10;
        n /= 10;
    }

    return sum_digit;
}

void solve()
{
    ll n, s;
    cin >> n >> s;

    if (sum(n) <= s)
    {
        cout << 0 << endl;
        return;
    }

    ll temp = 1, dig, add = 0, ans = 0;
    for (int i = 0; i < 18; i++)
    {
        dig = (n / temp) % 10;
        add = temp * ((10 - dig) % 10);
        n += add;
        ans += add;
        if (sum(n) <= s)
        {
            cout << ans << endl;
            return;
        }
        temp *= 10;
    }
    cout << ans << endl;
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
