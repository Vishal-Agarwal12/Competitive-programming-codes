#include <iostream>
#include <algorithm>
#define ll long long
using namespace std;

void solve()
{
    ll n, m, k;
    cin >> n >> m >> k;

    string s, t;
    cin >> s >> t;
    ll kd = k, tt;

    sort(s.begin(), s.end());
    sort(t.begin(), t.end());

    ll i = 0, j = 0;
    string ans = "";

    if (s[0] < t[0])
        tt = 1;
    else
        tt = 2;

    while (i < n && j < m)
    {
        if (tt == 1)
        {
            ans+=s[i];
            i++;
            kd--;
            while (i < n && s[i] < t[j] && kd)
            {
                kd--;
                ans += s[i];
                i++;
            }
            tt = 2;
        }
        else if (tt == 2)
        {
            ans += t[j];
            j++;
            kd--;
            while (j < m && t[j] < s[i] && kd)
            {
                kd--;
                ans += t[j];
                j++;
            }
            tt = 1;
        }
        kd = k;
    }
    cout << ans << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int test;
    cin >> test;
    while (test--)
        solve();

    return 0;
}
