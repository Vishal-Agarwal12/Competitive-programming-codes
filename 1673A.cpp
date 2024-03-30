#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    string s;
    cin >> s;

    // sort(s.begin(), s.end());
    if (s.size() == 1)
    {
        cout << "Bob"
             << " " << s[0] - 'a' + 1 << endl;
    }
    else
    {
        cout << "Alice"
             << " ";
        ll res = 0,res1=0,res2=0;
        if (s.size() % 2 == 0)
        {
            for (int i = 0; i < s.size(); i++)
            {
                res += (s[i] - 'a' + 1);
            }
            cout<<res<<endl;
        }
        else
        {
            for (int i = 1; i < s.size(); i++)
                res1 += (s[i] - 'a' + 1);
            res1 = res1 - (s[0] - 'a' + 1);

            for (int i = 0; i < s.size()-1; i++)
                res2 += (s[i] - 'a' + 1);
            res2 = res2 - (s[s.size()-1] - 'a' + 1);

            cout<<max(res1,res2)<<endl;
        }
    }
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
