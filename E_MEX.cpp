#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll mex(ll a, ll b, ll c)
{
    for (int i = 0; i < 3; i++)
    {
        if (a != i && b != i && c != i)
            return i;
    }
    return 3;
}

void solve()
{
    ll n;
    cin >> n;

    ll a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    string s;
    cin >> s;

    vector<vector<ll>> cntM(n, vector<ll>(3));
    vector<vector<ll>> cntX(n, vector<ll>(3));

    if (s[0] == 'M')
        cntM[0][a[0]]++;
    for (int i = 1; i < n; i++)
    {
        cntM[i] = cntM[i - 1];
        if (s[i] == 'M')
            cntM[i][a[i]]++;
    }

    if (s[n - 1] == 'X')
        cntX[n - 1][a[n - 1]]++;
    for (int i = n - 2; i >= 0; i--)
    {
        cntX[i] = cntX[i + 1];
        if (s[i] == 'X')
            cntX[i][a[i]]++;
    }

    ll ans = 0;
    for (ll i = 0; i < n; i++)
    {
        if (s[i] != 'E')
            continue;

        for (ll j = 0; j < 3; j++)
        {
            for (ll k = 0; k < 3; k++)
            {
                ans += (cntM[i][j] * cntX[i][k] * mex(j, k, a[i]));
            }
        }
    }

    cout << ans << endl;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
