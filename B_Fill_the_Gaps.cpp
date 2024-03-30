#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    ll a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 1; i < n; i++)
    {

        if (abs(a[i] - a[i - 1]) > 1)
        {
            if (a[i] > a[i - 1])
            {
                ll temp = a[i - 1];
                while (temp != a[i])
                {
                    cout << temp << " ";
                    temp++;
                }
            }
            else if (a[i] < a[i - 1])
            {
                ll temp = a[i - 1];
                while (temp != a[i])
                {
                    cout << temp << " ";
                    temp--;
                }
            }
        }
        else
            cout << a[i - 1] << " ";
    }
    cout << a[n - 1];
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
