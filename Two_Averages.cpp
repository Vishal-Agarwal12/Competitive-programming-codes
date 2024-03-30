#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, k;
        cin >> n >> m >> k;

        vector<int> a(n), b(m);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < m; i++)
        {
            cin >> b[i];
        }

        sort(a.begin(), a.end());
        sort(b.begin(), b.end());

        double sum_a = accumulate(a.begin(), a.end(), 0);
        double sum_b = accumulate(b.begin(), b.end(), 0);
        double mean_a = sum_a / n;
        double mean_b = sum_b / m;

        if (mean_a <= mean_b)
        {
            cout << 0 << endl;
            continue;
        }

        int i = 0, j = m - 1, ans = 0;
        while (i < n && j >= 0)
        {
            int diff = k - a[i];
            if (diff < 0)
                break;
            if (diff >= b[j] - k)
            {
                sum_b += (b[j] - k);
                k = b[j--];
            }
            else
            {
                ans++;
                sum_a += diff;
                sum_b += (diff - (k - b[j]));
                k = a[i++];
                mean_a = sum_a / n;
                mean_b = sum_b / m;
                if (mean_a <= mean_b)
                    break;
            }
        }

        if (mean_a <= mean_b)
        {
            cout << ans << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
    return 0;
}
