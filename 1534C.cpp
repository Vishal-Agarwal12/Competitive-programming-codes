#include <bits/stdc++.h>
#define int long long
#define m 1000000007
using namespace std;

struct DSU
{
    vector<int> father;
    vector<int> size;
    int components;
    int maxComponentSize;

    DSU(int N)
    {
        father = vector<int>(N + 1);
        size = vector<int>(N + 1, 1);
        components = N;
        maxComponentSize = 1;
        for (int i = 1; i <= N; i++)
        {
            father[i] = i;
        }
    }

    int find(int node)
    {
        if (father[node] != node)
        {
            father[node] = find(father[node]);
        }
        return father[node];
    }

    void unite(int A, int B)
    {
        int rootA = find(A);
        int rootB = find(B);
        if (rootA != rootB)
        {
            if (size[rootA] < size[rootB])
            {
                swap(rootA, rootB);
            }
            father[rootB] = rootA;
            size[rootA] += size[rootB];
            maxComponentSize = max(maxComponentSize, size[rootA]);
            components--;
        }
    }

    int getMaxComponentSize()
    {
        return maxComponentSize;
    }

    int getComponentSize(int node)
    {
        int root = find(node);
        return size[root];
    }

    int countComponents()
    {
        return components;
    }
};

void solve()
{
    int n;
    cin >> n;
    int a[n], b[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        cin >> b[i];

    DSU dsu(n);
    for (int i = 0; i < n; i++)
    {
        dsu.unite(a[i], b[i]);
    }
    int numComponents = dsu.countComponents();
    int result = (1ll << numComponents);
    result %= m;
    cout << result << endl;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}