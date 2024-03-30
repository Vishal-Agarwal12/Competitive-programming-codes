#include <bits/stdc++.h>
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

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin >> N;

        int a[N];
        for (int i = 0; i < N; i++)
            cin >> a[i];

        DSU dsu(N);

        for (int i = 0; i < N; i++)
        {
            dsu.unite(i + 1, a[i]);
        }

        for (int i = 1; i <= N; i++)
        {
            int componentSize = dsu.getComponentSize(i);
            cout << componentSize << " ";
        }
        cout << endl;
    }

    return 0;
}