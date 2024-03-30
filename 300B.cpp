#include <iostream>
#include <vector>
using namespace std;

int par[50];

int find(int x)
{
    return x != par[x] ? par[x] = find(par[x]) : x;
}

int main()
{
    for (int i = 1; i < 50; ++i)
    {
        par[i] = i;
    }

    int n, m, a, b;
    cin >> n >> m;
    for (int i = 0; i < m; ++i)
    {
        cin >> a >> b;
        par[find(a)] = find(b);
    }

    vector<int> v[50];
    for (int i = 1; i <= n; ++i)
    {
        v[find(i)].push_back(i);
    }

    vector<vector<int>> w[4];
    for (int i = 1; i <= n; ++i)
    {
        if (v[i].size() > 3)
        {
            cout << "-1" << endl;
            return 0;
        }
        w[v[i].size()].push_back(v[i]);
    }

    if (w[2].size() > w[1].size())
    {
        cout << "-1" << endl;
        return 0;
    }

    for (int i = 0; i < w[3].size(); ++i)
    {
        cout << w[3][i][0] << " " << w[3][i][1] << " " << w[3][i][2] << endl;
    }

    for (int i = 0; i < w[2].size(); ++i)
    {
        cout << w[2][i][0] << " " << w[2][i][1] << " " << w[1].back()[0] << endl;
        w[1].pop_back();
    }

    for (int i = 0; i < w[1].size(); i += 3)
    {
        cout << w[1][i][0] << " " << w[1][i + 1][0] << " " << w[1][i + 2][0] << endl;
    }
}
