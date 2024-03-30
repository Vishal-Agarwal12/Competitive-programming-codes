#include <bits/stdc++.h>
#define ll int
using namespace std;

void solve()
{
    string s, t;
    cin >> s >> t;

    int n = s.size();
    multiset<char> ms,ms2;
    for (int i = 0; i < s.size(); i++)
    {
        ms.insert(s[i]);
    }

    for(int i=0;i<t.size();i++) {
        if(t[i]=='@') ms2.insert('@');
    }

    for (int i = 0; i < t.size(); i++)
    {
        if (ms.find(t[i]) != ms.end())
        {
            ms.erase(t[i]);
        }
        else if (t[i] == 'a' || t[i] == 't' || t[i] == 'c' || t[i] == 'o' || t[i] == 'd' || t[i] == 'e' || t[i] == 'r')
        {
            if (ms.find('@') != ms.end())
                ms.erase('@');
            else
            {
                cout << "No\n";
                return;
            }
        }
        else if (t[i] == '@')
        {
        }
        else
        {
            cout << "No\n";
            return;
        }
    }

    for (char c : ms)
    {
        if (c != '@' || c != 'a' || c != 't' || c != 'c' || c != 'o' || c != 'd' || c != 'e' || c != 'r')
        {
            cout << "No\n";
            return;
        }
        else if(ms2.find('@')!=ms2.end()) {
            ms2.erase('@');
        }
    }

    cout << "Yes\n";
    return;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}