#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n, m;
    cin >> n >> m;

    ll l = 0, r = 0;
    set<ll> st;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x == -1)
            l++;
        else if (x == -2)
            r++;
        else
            st.insert(x);
    }

    ll res = max(min(l + st.size(), m), min(r + st.size(), m));

    ll left = 0;
    for (auto i : st)
    {
        res = max(res, 1 + min(i - 1, l + left) + min(m - i, r + (st.size() - left - 1)));
        left++;
    }

    cout << res << endl;
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
