#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;
    string s;
    cin >> s;

    for (int i = 0; i < n; i++)
    {
        if (k == 0 && s[i] == 'o')
        {
            s[i] = 'x';
        }
        else if (s[i] == 'o')
        {
            k--;
        }
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
