#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n;
    string s;
    cin >> n >> s;

    string ans = "";
    for (int i = 0; i < n; i++)
    {
        ans += s[i];
        ans += s[i];
    }
    cout << ans << endl;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
