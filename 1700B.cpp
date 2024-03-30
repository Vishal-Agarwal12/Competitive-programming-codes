#include <iostream>
#include <string>
#define si(x) int(x.size())
using namespace std;
string sub(string a, string b)
{
    if (si(a) < si(b))
        return "";
    if (si(a) == si(b) && a <= b)
        return "";

    for (int i = 0; i < si(b); i++)
    {
        if (a[si(a) - 1 - i] < b[si(b) - 1 - i])
        {
            a[si(a) - 1 - i - 1]--;
            a[si(a) - 1 - i] += 10;
        }
        a[si(a) - 1 - i] -= int(b[si(b) - 1 - i] - '0');
    }

    for (int i = si(a) - 1; i >= 0; i--)
    {
        if (a[i] < '0')
        {
            a[i - 1]--;
            a[i] += 10;
        }
    }
    int i = 0;
    while (a[i] == '0')
        i++;

    return a.substr(i);
}
void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    string ans = "";
    if (s[0] != '9')
    {
        for (auto x : s)
        {
            int digit = x - '0';
            ans += to_string(9 - digit);
        }
        cout << ans << endl;
        return;
    }
    else
    {
        string ss = string(n + 1, '1');
        cout << sub(ss, s) << endl;
        return;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}
