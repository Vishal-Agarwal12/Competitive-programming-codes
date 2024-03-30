#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll i, j, n, t, k, count, ans, total, sum, p_j, rem;
    cin >> n;
    vector<ll> a;
    j = 1;
    a.push_back(j);

    for (i = 1; i <= 14; i++)
    {
        j = j * i;
        a.push_back(j);
    }

    k = a.size();
    total = (1 << k);

    ans = -1;
    for (i = 0; i < total; i++)
    {
        sum = count = 0;
        p_j = 1;
        for (j = 0; j < k; j++)
        {
            if ((i & p_j))
            {
                sum = sum + a[j];
                count++;
            }
            p_j *= 2;
        }
        if (sum > n)
            continue;
        rem = n - sum;
        while (rem > 0)
        {
            count++;
            rem = (rem & (rem - 1));
        }
        if (ans == -1)
            ans = count;
        else
            ans = min(ans, count);
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
