#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    string s;
    cin >> s;

    string ans = "";
    char temp = s[0];
    ans += s[0];

    for (int i = 1; i < n - 1; i++)
    {
        if (s[i] == temp)
        {
            temp = s[i + 1];
            ans += temp;
            i++;
        }
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
