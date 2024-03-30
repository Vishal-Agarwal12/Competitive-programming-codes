#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    string s;
    cin >> s;

    ll maxi = 0, cnt = 1;
    for (int i = 0; i < n - 1; i++)
    {
        if (s[i] == s[i + 1])
            cnt++;
        else
        {
            maxi = max(maxi, cnt);
            cnt = 1;
        }
    }
    maxi = max(maxi, cnt);
    cout << maxi + 1 << endl;
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
