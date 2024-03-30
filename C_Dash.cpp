#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n, m, h, k, x, y, a, b;
    cin >> n >> m >> h >> k;

    string s;
    cin >> s;

    set<pair<ll, ll>> st;
    for (int i = 0; i < m; i++)
    {
        cin >> x >> y;
        st.insert({x, y});
    }

    a = 0, b = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'L')
        {
            a--;
            h--;
            pair<ll, ll> p(a, b);
            if (h < 0)
            {
                cout << "No\n";
                return;
            }
            if (st.find(p) != st.end() && h < k)
            {
                h = k;
                st.erase(p);
            }
        }
        else if (s[i] == 'R')
        {
            a++;
            h--;
            pair<ll, ll> p(a, b);
            if (h < 0)
            {
                cout << "No\n";
                return;
            }
            if (st.find(p) != st.end() && h < k)
            {
                h = k;
                st.erase(p);
            }
        }
        else if (s[i] == 'U')
        {
            b++;
            h--;
            pair<ll, ll> p(a, b);
            if (h < 0)
            {
                cout << "No\n";
                return;
            }
            if (st.find(p) != st.end() && h < k)
            {
                h = k;
                st.erase(p);
            }
        }
        else if (s[i] == 'D')
        {
            b--;
            h--;
            pair<ll, ll> p(a, b);
            if (h < 0)
            {
                cout << "No\n";
                return;
            }
            if (st.find(p) != st.end() && h < k)
            {
                h = k;
                st.erase(p);
            }
        }
    }
    cout << "Yes\n";
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
