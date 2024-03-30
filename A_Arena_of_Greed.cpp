#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n;
    cin >> n;

    ll coins = 0, t = 1;
    while (n)
    {
        if (n % 2 == 0 && t == 1)
        {
            coins += n / 2;
            n /= 2;
        }
        else if (n % 2 == 0 && t == 0)
        {
            n /= 2;
        }

        if (n % 2 != 0 && t == 1)
        {
            coins += 1;
            n--;
        }
        else if (n % 2 != 0 && t == 0)
        {
            n--;
        }
        t = !t;
    }
    cout << coins << endl;
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
