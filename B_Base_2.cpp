#include <iostream>
#define ll unsigned long long
using namespace std;

void solve()
{
    ll a[64];
    for (ll i = 0; i < 64; i++)
    {
        cin >> a[i];
    }

    ll ans = 0;
    for (ll i = 0; i < 64; i++)
    {
        if (a[i] != 0)
        {
            ans += (1LL << i);
        }
    }

    cout << ans << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
