#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    vector<long long> pref(n);
    for (int i = 1; i < n - 1; i++)
    {
        pref[i] = pref[i - 1];
        if (i % 2 == 1)
        {
            int goal = max(a[i - 1], a[i + 1]) + 1;
            int need = max(0, goal - a[i]);
            pref[i] += need;
        }
    }
    vector<long long> suf(n);
    for (int i = n - 2; i >= 1; i--)
    {
        suf[i] = suf[i + 1];
        if (i % 2 == (n - 2) % 2)
        {
            int goal = max(a[i - 1], a[i + 1]) + 1;
            int need = max(0, goal - a[i]);
            suf[i] += need;
        }
    }
    if (n % 2 == 1)
    {
        cout << pref[n - 2] << '\n';
    }
    else
    {
        long long ans = (long long)1e18;
        for (int i = 1; i < n; i += 2)
        {
            ans = min(ans, pref[i - 1] + suf[i]);
        }
        cout << ans << '\n';
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
