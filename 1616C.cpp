#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    if (n < 3)
    {
        cout << "0" << endl;
        return;
    }
    int ans = 0;
    for (int s = 0; s < n - 1; s++)
    {
        for (int e = s + 1; e < n; e++)
        {
            int cnt = 0;
            for (int i = 0; i < n; i++)
            {
                if ((v[e] - v[s]) * (i - s) == (v[i] - v[s]) * (e - s))
                {
                    cnt++;
                }
            }
            ans = max(ans, cnt);
        }
    }
    cout << n - ans << endl;
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