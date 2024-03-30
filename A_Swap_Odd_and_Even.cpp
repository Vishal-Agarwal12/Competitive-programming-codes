#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    string s;
    cin >> s;

    ll n = s.size();
    for (int i = 0; i < n - 1; i += 2)
    {
        swap(s[i], s[i + 1]);
    }

    cout << s << endl;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
