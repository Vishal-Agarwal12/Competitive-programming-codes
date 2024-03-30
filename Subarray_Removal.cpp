#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int max_score = 0;
        for (int i = 1; i < n - 1; i++)
        {
            if ((a[i] > a[i - 1] && a[i] > a[i + 1]) || (a[i] < a[i - 1] && a[i] < a[i + 1]))
            {
                int score = 1;
                int j = i - 1;
                while (j >= 0 && a[j] < a[i])
                {
                    score++;
                    j--;
                }
                j = i + 1;
                while (j < n && a[j] < a[i])
                {
                    score++;
                    j++;
                }
                max_score = max(max_score, score);
            }
        }
        cout << max_score << endl;
    }
    return 0;
}
