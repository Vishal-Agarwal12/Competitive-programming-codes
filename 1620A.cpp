#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    string s;
    cin >> s;

    ll neq = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'N')
            neq++;
    }
    if (neq == 1)
        cout << "NO" << endl;
    else
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
