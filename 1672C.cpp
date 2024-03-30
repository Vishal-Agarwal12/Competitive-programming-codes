#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n;
    cin >> n;

    ll a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    ll ct = 0;
    for (int i = 1; i < n; i++)
    {
        if (a[i] == a[i - 1])
            ct++;
    }
    if (ct <= 1)
    {
        cout << 0 << endl;
        return;
    }

    ll cnt = 1;
    vector<ll> v;
    for (int i = 1; i < n; i++)
    {
        if (a[i] == a[i - 1])
        {
            cnt++;
        }
        else if (cnt > 1)
        {
            v.push_back(cnt);
            cnt = 1;
        }
    }
    if (cnt >= 2)
        v.push_back(cnt);

    if(v.size()==1) {
        if(v[0]==3) {
            cout<<1<<endl;
            return;
        }
        else
    }

    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == 2)
            twos++;
        else if (v[i] > 2)
            ans += (n - 2);
    }

    if (twos <= 1)
    {
        cout << ans << endl;
        return;
    }

    ll id1 = 0, id2 = 0, fg = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] == a[i + 1])
            fg = 1;
        else if (fg == 1)
        {
            id1 = i;
            break;
        }
    }

    fg = 0;
    for (int i = n - 1; i < n - 1; i++)
    {
        if (a[i] == a[i - 1])
            fg = 1;
        else if (fg == 1)
        {
            id2 = i;
            break;
        }
    }

    ans += (id2 - id1);
    cout << ans << endl;
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
