#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<int> v1;

    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            v1.push_back(i);
            if (n / i != i)
                v1.push_back(n / i);
        }
    }
    cout << v1.size() << endl;
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
