#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool isPalindrome(const string &str)
{
    string reversedStr = str;
    reverse(reversedStr.begin(), reversedStr.end());

    return str == reversedStr;
}

void solve()
{
    ll n;
    cin >> n;

    vector<string> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    vector<string> s;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
                continue;
            s.push_back(v[i] + v[j]);
        }
    }

    for (int i = 0; i < s.size(); i++)
    {
        if (isPalindrome(s[i]))
        {
            cout << "Yes" << endl;
            return;
        }
    }

    cout << "No" << endl;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
