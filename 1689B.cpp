#include <iostream>
#include <set>
#include <vector>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    if (n == 1)
    {
        cout << -1 << endl;
        return;
    }

    set<int> s;
    for (int i = 0; i < n; i++)
        s.insert(i + 1);

    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        auto it = s.begin();
        if (a[i] == *it)
        {
            ++it;
            if (it != s.end())
            {
                v.push_back(*it);
                s.erase(s.find(*it));
            }
            else
            {
                v.push_back(a[i]);
                swap(v[n - 2], v[n - 1]);
            }
        }
        else
        {
            v.push_back(*it);
            s.erase(s.find(*it));
        }
    }

    for (auto x : v)
    {
        cout << x << " ";
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
