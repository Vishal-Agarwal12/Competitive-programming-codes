#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n;
    cin >> n;

    set<string> s;
    ll ans = 0;

    for (int i = 0; i < n; i++)
    {
        string st;
        cin >> st;
        string ts = st;
        reverse(st.begin(), st.end());
        if (i == 0)
        {
            s.insert(ts);
        }
        else if (s.find(st) == s.end() && s.find(ts) == s.end())
            s.insert(ts);
    }

    cout << s.size() << endl;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
