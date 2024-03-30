#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;

        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        multiset<int> s;
        for (int i = 1; i <= n; i++)
        {
            s.insert(a[i - 1] - i);
        }

        for (int i = 0; i < k; i++)
        {
            auto it = s.begin();
            int val = *it;
            s.erase(it);
            s.insert(val + 1);
        }

        auto it = s.begin();
        cout << *it + n + k << endl;
    }

    return 0;
}
