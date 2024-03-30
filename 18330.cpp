#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    string s;
    cin >> s;

    unordered_set<string> st;

    for (int i = 0; i < n - 1; i++)
    {
        st.insert(s.substr(i, 2));
    }

    cout << st.size() << endl;
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
