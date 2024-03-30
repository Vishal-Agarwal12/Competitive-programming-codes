#include <bits/stdc++.h>
#include <vector>
#include <set>
#define int long long

using namespace std;

void solve()
{
    int n, m, x;
    cin >> n >> m;

    vector<vector<int>> v(60, vector<int>(60, 0));
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> x;
            v[i][j] = x;
        }
    }

    set<pair<int, int>> s;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n - 2; j++)
        {
            for (int k = j + 2; k < n; k++)
            {
                pair<int, int> p1(v[i][j], v[i][k]);
                pair<int, int> p2(v[i][k], v[i][j]);
                if (s.empty())
                {
                    s.insert(p1);
                    continue;
                }
                if (s.find(p1) == s.end() && s.find(p2) == s.end())
                {
                    s.insert(p1);
                }
            }
        }
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            pair<int, int> p3(v[i][j], v[i][j + 1]);
            pair<int, int> p4(v[i][j + 1], v[i][j]);
            if (s.find(p3) != s.end())
            {
                s.erase(p3);
            }
            else if (s.find(p4) != s.end())
            {
                s.erase(p4);
            }
        }
    }

    cout << s.size() << endl;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
