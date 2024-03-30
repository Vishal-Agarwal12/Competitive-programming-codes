#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    string s;
    cin >> s;
    ll a = 0, b = 0;
    for (auto x : s)
    {
        if (x == 'A')
            a++;
        else
            b++;
    }

    if (a == b)
    {
        if (s[n - 1] == 'A')
            cout << "T" << endl;
        else
            cout << "A" << endl;
    }
    else if (a > b)
        cout << "A" << endl;
    else
        cout << "T" << endl;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
