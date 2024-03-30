#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool isGreatGridPossible(int n, int m, int k, vector<pair<pair<int, int>, pair<int, int>>> constraints)
{
    vector<vector<char>> grid(n, vector<char>(m, 'A'));

    for (int i = 0; i < k; i++)
    {
        int x1 = constraints[i].first.first - 1;
        int y1 = constraints[i].first.second - 1;
        int x2 = constraints[i].second.first - 1;
        int y2 = constraints[i].second.second - 1;

        if (x1 == x2)
        {
            if (y1 < y2)
            {
                grid[x1][y1] = 'B';
                grid[x2][y2] = 'B';
            }
            else
            {
                grid[x1][y1] = 'B';
                grid[x2][y2] = 'B';
            }
        }
        else
        {
            if (x1 < x2)
            {
                grid[x1][y1] = 'B';
                grid[x2][y2] = 'B';
            }
            else
            {
                grid[x1][y1] = 'B';
                grid[x2][y2] = 'B';
            }
        }
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < m - 1; j++)
        {
            vector<char> chars;
            chars.push_back(grid[i][j]);
            chars.push_back(grid[i][j + 1]);
            chars.push_back(grid[i + 1][j]);
            chars.push_back(grid[i + 1][j + 1]);
            sort(chars.begin(), chars.end());
            if (chars[0] == chars[1] || chars[1] == chars[2] || chars[2] == chars[3])
            {
                return false;
            }
        }
    }

    return true;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, m, k;
        cin >> n >> m >> k;

        vector<pair<pair<int, int>, pair<int, int>>> constraints(k);
        for (int i = 0; i < k; i++)
        {
            cin >> constraints[i].first.first >> constraints[i].first.second >> constraints[i].second.first >> constraints[i].second.second;
        }

        bool possible = isGreatGridPossible(n, m, k, constraints);
        if (possible)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
