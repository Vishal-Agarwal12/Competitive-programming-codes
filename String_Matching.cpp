#include <bits/stdc++.h>
#define ll long long
using namespace std;
int kmp_count(string text, string pattern)
{
    int n = text.length();
    int m = pattern.length();
    vector<int> lps(m, 0);
    int j = 0;
    int i = 1;
    int count = 0;
    while (i < m)
    {
        if (pattern[i] == pattern[j])
        {
            j++;
            lps[i] = j;
            i++;
        }
        else
        {
            if (j != 0)
            {
                j = lps[j - 1];
            }
            else
            {
                lps[i] = 0;
                i++;
            }
        }
    }
    i = 0;
    j = 0;
    while (i < n)
    {
        if (pattern[j] == text[i])
        {
            j++;
            i++;
        }
        if (j == m)
        {
            count++;
            j = lps[j - 1];
        }
        else if (i < n && pattern[j] != text[i])
        {
            if (j != 0)
            {
                j = lps[j - 1];
            }
            else
            {
                i++;
            }
        }
    }
    return count;
}
void solve()
{
    string s, p;
    cin >> s >> p;

    int count = kmp_count(s, p);
    cout << count << endl;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // int t;
    // cin >> t;
    // while (t--)
    solve();

    return 0;
}
