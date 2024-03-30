#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    string s;
    cin >> s;

    if (s.front() == '0')
    {
        cout << "0\n";
        return;
    }

    int st = 0;
    int ans = 1;
    while (st < 1 and s[st] == '?')
        ans *= 9, st++;

    for (; st < s.size(); st++)
    {
        if (s[st] == '?')
            ans *= 10;
    }

    std::cout << ans << '\n';
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
