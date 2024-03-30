#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int x;
    cin >> x;

    int ans = 1, fg = 0;
    if (x == 1)
    {
        cout << 3 << endl;
        return;
    }
    else if (x % 2 == 1)
    {
        cout << 1 << endl;
        return;
    }
    else
    {
        for (int i = 0; i < 31; i++)
        {
            if (x & (1 << i))
            {
                if (fg == 1)
                {
                    cout << ans << endl;
                    return;
                }
                ans = (1 << i);
                fg++;
            }
        }
    }
    cout << ans + 1 << endl;
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
