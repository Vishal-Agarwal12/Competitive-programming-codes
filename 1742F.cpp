#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    int q;
    cin >> q;
    bool otherA = false, otherB = false;
    ll cntA = 0, cntB = 0;
    while (q--)
    {
        ll d, k;
        string x;
        cin >> d >> k >> x;
        for (auto c : x)
        {
            if (d == 1)
            {
                if (c != 'a')
                    otherA = 1;
                else
                    cntA += k;
            }
            else
            {
                if (c != 'a')
                    otherB = 1;
                else
                    cntB += k;
            }
        }
        if (otherB)
        {
            cout << "YES\n";
        }
        else if (!otherA && cntA < cntB)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin>>t;
    while(t--) 
        solve();

    return 0;
}

