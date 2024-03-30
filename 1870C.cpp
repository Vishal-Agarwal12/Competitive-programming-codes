#include <bits/stdc++.h>

using namespace std;
#define ll long long

void solve()
{
    ll n, k, x;
    cin >> n >> k;

    vector<vector<ll>> pos(k);
    set<int> s;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        pos[x - 1].push_back(i);
        s.insert(i);
    }
    vector<ll> ans(k, 0);

    for (int i = 0; i < k; i++)
    {
        if (pos[i].size() == 0)
            continue;
        ans[i] = 2 * (*s.rbegin() - *s.begin() + 1);

        for (auto y : pos[i])
            s.erase(y);
    }

    for (int i = 0; i < k; i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}
