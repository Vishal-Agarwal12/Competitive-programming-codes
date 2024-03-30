#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> s(k);
    for (int i = 0; i < k; i++)
    {
        cin >> s[i];
    }
    if (k == 1)
    {
        cout << "YES" << '\n';
        return;
    }
    vector<int> d(k - 1);
    for (int i = 0; i < k - 1; i++)
    {
        d[i] = s[i + 1] - s[i];
    }
    if (!is_sorted(d.begin(), d.end()))
    {
        cout << "NO" << '\n';
        return;
    }
    if ((long long)(n - k + 1) * d[0] >= s[0])
    {
        cout << "YES" << '\n';
    }
    else
    {
        cout << "NO" << '\n';
    }
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
