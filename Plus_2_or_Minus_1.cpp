#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll y;
        cin >> y;
        ll ans = 0;
        for (ll i = 0; i <= y; i += 2)
            ans++;
        if (y % 2 == 1)
            ans--;
        cout << ans << endl;
    }
    return 0;
}
