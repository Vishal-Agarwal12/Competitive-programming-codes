#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{

    ll n, i, i1, k1, p, q, j, k;
    cin >> n;

    ll ans[n];
    j = -1;
    for (i = n - 1; i >= 0;)
    {

        for (k = 0; k <= i; k++)
        {
            p = k + i;
            q = sqrt(p);

            if (q * q == p)
            {
                k1 = k;
                i1 = i;
                while (k1 <= i1)
                {
                    ans[k1] = i1;
                    ans[i1] = k1;
                    k1++;
                    i1--;
                }
                i = k - 1;
                break;
            }
        }
    }

    for (i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
    }
    cout << "\n";
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
