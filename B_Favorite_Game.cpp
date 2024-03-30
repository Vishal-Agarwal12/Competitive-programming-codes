#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n, m;
    cin >> n >> m;

    ll a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    ll ans = 0;
    ll l = a[0], r = a[1];
    vector<ll> x;
    unordered_set<ll> st;
    for (int i = 2; i < n; i++)
        st.insert(a[i]);

    for (int i = 2; i < n; i++)
    {
        if (m == 0)
        {
            cout << ans << endl;
            return;
        }
        if (a[i] >= l && a[i] <= r)
        {
            ans += 0;
            m--;
        }
        else
        {
            x.push_back(min(abs(a[i] - l), abs(a[i] - r)));
        }
    }
    if (m == 0)
    {
        cout << 0 << endl;
        return;
    }

    sort(x.begin(), x.end());

    for (int i = 0; i < x.size(); i++)
    {
        if (!m)
            break;
        if (m)
        {
            if (st.find(l - x[i]) != st.end())
            {
                a[0] = l - x[i];
                st.erase(st.find(l - x[i]));
            }

            else
            {
                a[1] = r + x[i];
                st.erase(st.find(r + x[i]));
            }
        }
        m--;
    }

    cout << l - a[0] + a[1] - r << endl;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
