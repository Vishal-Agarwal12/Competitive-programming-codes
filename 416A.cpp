#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    string s = "";
    char ch;
    ll num;
    ll l = -1e9, r = 1e9;

    for (int i = 0; i < n; i++)
    {
        cin >> s >> num >> ch;
        if (ch == 'Y' && num >= l && num <= r)
        {
            if (s == ">")
                l = num + 1;
            else if (s == ">=")
                l = num;
            else if (s == "<=")
                r = num;
            else
                r = num - 1;
        }
        else if (ch == 'Y')
        {
            cout << "Impossible";
            return;
        }
    }
    cout << 17 << endl;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
