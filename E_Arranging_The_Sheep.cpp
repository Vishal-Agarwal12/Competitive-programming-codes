#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    string s;
    cin >> s;

    ll start = -1, end = -1, cnt = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '*' && start == -1)
        {
            start = i;
            cnt++;
        }
        else if (s[i] == '*')
        {
            end = i;
            cnt++;
        }
    }

    if (start == -1 || start - end + 1 == cnt)
    {
        cout << 0 << endl;
        return;
    }

    ll left = 0, ans = 0;
    for (int i = start; i <= end; i++)
    {
        if (s[i] == '*')
        {
            left++;
        }
        else
        {
            ans += min(left, cnt - left);
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
