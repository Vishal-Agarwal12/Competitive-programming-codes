#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n;
    cin >> n;

    string s, t, u;
    cin >> s >> t >> u;

    for (int i = 0; i < n; i++)
    {
        int result = (t[i] - s[i]) % 26;
        if (result < 0)
            result += 26;
        char c = 'a' + (u[i] - 'a' + result) % 26;
        cout << c;
    }
    cout << endl;
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
