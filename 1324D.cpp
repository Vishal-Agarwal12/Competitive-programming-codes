#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll hihi(const std::vector<ll> &sortedVector, ll target)
{
    auto it = std::lower_bound(sortedVector.begin(), sortedVector.end(), target);
    if (it != sortedVector.end())
    {
        return std::distance(sortedVector.begin(), it);
    }
    return -1;
}

void solve()
{
    ll n, i, ind = 0, ans = 0, y = 0;
    cin >> n;
    ll a[n], b[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        cin >> b[i];

    vector<ll> z;
    for (int i = 0; i < n; i++)
        z.push_back(a[i] - b[i]);

    sort(z.begin(), z.end());
    for (int i = 0; i < n - 1; i++)
    {
        if (z[i] < 0)
        {
            if (hihi(z, -z[i] + 1) != -1)
            {
                y = hihi(z, -z[i] + 1);
                ans += (n - y);
            }
        }
        else if (z[i] == 0)
        {
            if (hihi(z, 1) != -1)
            {
                y = hihi(z, 1);
                ans += (n - y);
            }
        }
        else if (z[i] > 0)
        {
            ind = n - i;
            break;
        }
    }
    if (ind > 0)
        ans += ((ind * (ind - 1)) / 2);
    cout << ans << endl;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
