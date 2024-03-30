#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;

    vector<ll> a(n), b(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        cin >> b[i];

    std::vector<std::pair<int, int>> elements;
    for (int i = 0; i < n; ++i)
    {
        elements.push_back(std::make_pair(a[i], i));
    }
    std::sort(elements.begin(), elements.end());

    std::vector<int> positions(n);
    for (int i = 0; i < n; ++i)
    {
        positions[elements[i].second] = i;
    }

    sort(b.begin(), b.end());

    for (int i = 0; i < n; i++)
    {
        cout << b[positions[i]] << " ";
    }

    cout << endl;
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
