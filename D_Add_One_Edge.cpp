#include <iostream>
#include <vector>
#include <stack>

using namespace std;

int maxDistanceDFS(const vector<vector<int>> &graph, int start)
{
    int numVertices = graph.size();
    vector<bool> visited(numVertices, false);
    vector<int> distance(numVertices, 0);

    stack<int> s;
    s.push(start);
    visited[start] = true;

    int maxDistance = 0;

    while (!s.empty())
    {
        int currVertex = s.top();
        s.pop();

        for (int neighbor : graph[currVertex])
        {
            if (!visited[neighbor])
            {
                s.push(neighbor);
                visited[neighbor] = true;
                distance[neighbor] = distance[currVertex] + 1;
                maxDistance = max(maxDistance, distance[neighbor]);
            }
        }
    }

    return maxDistance;
}

int main()
{
    int n1, n2, m;
    cin >> n1 >> n2 >> m;
    int numVertices = n1 + n2, numEdges = m;

    vector<vector<int>> graph(numVertices + 1);
    for (int i = 0; i < numEdges; i++)
    {
        int u, v;
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    int maxDistance = maxDistanceDFS(graph, 1);
    int maxDistance2 = maxDistanceDFS(graph, numVertices);

    cout << maxDistance + maxDistance2 + 1 << endl;
    return 0;
}
