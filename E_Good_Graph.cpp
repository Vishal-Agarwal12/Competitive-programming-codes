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
    int N, M;
    cin >> N >> M;

    DSU dsu(N);

    for (int i = 0; i < M; i++)
    {
        int A, B;
        cin >> A >> B;
        dsu.unite(A, B);
    }

    set<pair<int, int>> s;
    int k;
    cin >> k;

    for (int i = 0; i < k; i++)
    {
        int x, y;
        cin >> x >> y;
        s.insert({dsu.find(x), dsu.find(y)});
    }

    int q;
    cin >> q;

    for (int i = 0; i < q; i++)
    {
        int a, b;
        cin >> a >> b;
        if (s.find({dsu.find(a), dsu.find(b)}) != s.end() ||
        s.find({dsu.find(b), dsu.find(a)}) != s.end())
        {
            cout << "No" << endl;
        }
        else
        {
            cout << "Yes" << endl;
        }
    }

    return 0;
}
