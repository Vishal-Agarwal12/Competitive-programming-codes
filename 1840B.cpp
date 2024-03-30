#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
signed main()
{
    int t, n, k;
    cin >> t;
    while (t--)
    {
        int count = 1;
        int ans = 0;
        cin >> n >> k;
        vector<int> v;
        if (n >= (pow(2, k)) - 1)
        {
            cout << (1 << k) << endl;
        }
        else
        {
            for (int i = 1; i < 30; i++)
            {
                if (count > n)
                {
                    v.push_back(count / 2);
                    n = n - (count / 2);
                    count = 1;
                }
                else
                {
                    count = 2 * count;
                }
            }
            for (int j = 0; j < v.size(); j++)
            {
                ans = ans + v[j];
            }
            cout << ans + 1 << endl;
        }
    }
}