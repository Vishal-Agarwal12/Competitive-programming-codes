#include <iostream>
#include <vector>
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

    vector<int> componentSize(N + 1, 0);
    for (int i = 1; i <= N; i++)
    {
        int root = dsu.find(i);
        componentSize[root] = dsu.getComponentSize(root);
    }

    unordered_set<int>s;
    vector<int>com;
    for (int i = 1; i <= N; i++)
    {
        if(s.find(a[i])==s.end()) {
            s.insert(b[i]);
            com.push_back(componentSize[a[i]]);
        }
    }

    return 0;
}
