#include <iostream>
#include <vector>
#include <algorithm>

#define ll int
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;
    int a[n + 1];
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }

    if (k >= n)
    {
        for (int i = 1; i <= n; i++)
        {
            cout << a[i] << " ";
        }
        return;
    }
    vector<int> v;
    vector<bool> can_swap(n + 1);
    for (int i = 1; i <= n; i++)
    {
        if (i + k <= n)
        {
            can_swap[i] = 1;
            can_swap[i + k] = 1;
        }
    }
    for (int i = 1; i <= n; i++)
    {
        if (can_swap[i])
        {
            v.push_back(a[i]);
        }
    }
    sort(v.begin(), v.end());
    int pos = 0;
    for (int i = 1; i <= n; i++)
    {
        if (can_swap[i])
        {
            a[i] = v[pos];
            pos += 1;
        }
    }

    for (int i = 1; i <= n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}
