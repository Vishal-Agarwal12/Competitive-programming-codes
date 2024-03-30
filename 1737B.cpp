#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll bs_sqrt(ll x)
{
    for(int i=0;i<n;i++) {
        for(int j=i+1;j<n;j++) {
            
        }
    }
}

void solve()
{
    ll l, r, ans = 0;
    cin >> l >> r;

    ll left = bs_sqrt(l);
    ll right = bs_sqrt(r);

    ans = max(0ll, right - left - 1) * 3;

    if (left * left >= l && left * left <= r)
        ans++;
    if ((left + 1) * left >= l && (left + 1) * left <= r)
        ans++;
    if ((left + 2) * left >= l && (left + 2) * left <= r)
        ans++;

    if (left != right)
    {
        if (right * right >= l && right * right <= r)
            ans++;
        if ((right + 1) * right >= l && (right + 1) * right <= r)
            ans++;
        if ((right + 2) * right >= l && (right + 2) * right <= r)
            ans++;
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
