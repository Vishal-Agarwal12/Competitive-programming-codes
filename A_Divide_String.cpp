#include <bits/stdc++.h>
#define ll long long
using namespace std;

std::string f(const std::string &str1, const std::string &str2)
{
    int result = str1.compare(str2);
    if (result < 0)
    {
        return str1;
    }
    else if (result > 0)
    {
        return str2;
    }
    else
    {
        return "";
    }
}

void solve()
{
    ll n;
    cin >> n;
    string s, st1 = "", st2 = "";
    cin >> s;

    ll fg = 0;
    for (int i = 1; i < n; i++)
    {
        if (s[i] > s[0])
        {
            cout << "Yes" << endl;
            return;
        }
        else if (s[i] == s[0])
            fg = 1;
    }
    if (fg == 0)
    {
        cout << "No" << endl;
        return;
    }

    for (int i = 1; i < n; i++)
    {
        if (s[i] == s[0])
        {
            st1 = s.substr(0, i);
            st2 = s.substr(i, n - i);
            break;
        }
    }

    for (int i = 0; i < min(st1.size(), st2.size()); i++)
    {
        if (st1[i] < st2[i])
        {
            cout << "Yes" << endl;
            return;
        }
        else if (st1[i] > st2[i])
        {
            cout << "No" << endl;
            return;
        }
    }

    if (st2.size() > st1.size())
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
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
