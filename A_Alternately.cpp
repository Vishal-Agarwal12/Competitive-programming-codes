#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    string s;
    cin >> s;

    for (int i = 0; i < n - 1; i++)
    {
        if (s[i] == s[i + 1])
        {
            cout << "No\n";
            return;
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
