#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, iq;
    cin >> n >> iq;

    vector<int> a(n + 1);
    for (int i = 1; i <= n; i++)
        cin >> a[i];

    vector<int>b(n + 1);
    int sum = 0, nq = 0;

    for (int i = n; i >= 1; --i)
    {
        if (a[i] <= nq)
            b[i] = 1;
        else if (nq < iq)
            ++nq, b[i] = 1;
        else
            b[i] = 0;
    }

    for (int i = 1; i <= n; ++i)
        cout << b[i];

    cout << endl;
}

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t;
    std::cin >> t;

    while (t--)
        solve();

    return 0;
}
