#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    string s;
    cin >> s;

    set<char> st;
    ll n = s.size();

    for (int i = 0; i < n; i++)
    {
        st.insert(s[i]);
    }

    ll dis = st.size();
    for (int i = 0; i < n - dis; i++)
    {
        if (s[i] != s[i + dis])
        {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
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
