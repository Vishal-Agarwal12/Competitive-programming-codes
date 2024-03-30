#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll bs(const vector<ll> &arr, ll target)
{
    ll left = 0;
    ll right = arr.size() - 1;
    ll result = -1;

    while (left <= right)
    {
        ll mid = left + (right - left) / 2;

        if (arr[mid] >= target)
        {
            result = mid;
            right = mid - 1;
        }
        else
        {
            left = mid + 1;
        }
    }

    return result;
}

void solve()
{
    ll n, m;
    cin >> n >> m;

    vector<ll> a(n), b(m);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < m; i++)
        cin >> b[i];

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    ll mn = 0;
    for (ll i = 0; i < n; i++)
    {
        mn = a[i];

        ll te = bs(b, mn);
        if (te == -1)
            continue;
        ll re = m - te;
        if (i + 1 >= re)
        {
            cout << mn << endl;
            return;
        }
    }
    cout << b[m - 1] + 1 << endl;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
