#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    string s;
    cin >> s;
    if (s == "^")
    {
        cout << 1 << endl;
        return;
    }
    int cnt = 0;
    for (int i = 1; i < s.size(); i++)
    {
        if (s[i] == s[i - 1] and s[i] == '_')
            cnt++;
    }
    if (s[0] == '_')
        cnt++;
    if (s[s.size() - 1] == '_')
        cnt++;

    cout << cnt << endl;
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
