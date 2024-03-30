#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

bool dfs(int node, unordered_map<int, vector<int>> &graph, vector<bool> &visited, vector<bool> &inStack, vector<int> &cycle)
{
    visited[node] = true;
    inStack[node] = true;

    for (int neighbor : graph[node])
    {
        if (!visited[neighbor])
        {
            if (dfs(neighbor, graph, visited, inStack, cycle))
            {
                cycle.push_back(neighbor);
                return true;
            }
        }
        else if (inStack[neighbor])
        {
            cycle.push_back(neighbor);
            return true;
        }
    }

    inStack[node] = false;
    return false;
}

vector<int> findCycleInDirectedGraph(unordered_map<int, vector<int>> &graph)
{
    int numNodes = graph.size();
    vector<bool> visited(numNodes, false);
    vector<bool> inStack(numNodes, false);
    vector<int> cycle;

    for (const auto &entry : graph)
    {
        int node = entry.first;
        if (!visited[node])
        {
            if (dfs(node, graph, visited, inStack, cycle))
            {
                cycle.push_back(node);
                break;
            }
        }
    }

    return cycle;
}

int main()
{
    int n;
    cin >> n;

    unordered_map<int, vector<int>> graph;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        graph[i + 1].push_back(x);
    }
    vector<int> cycle = findCycleInDirectedGraph(graph);
    reverse(cycle.begin(), cycle.end());

    // if (cycle.empty())
    // {
    //     cout << "No cycle found." << endl;
    // }
    // else
    // {
        cout << cycle.size() - 1 << endl;
        for (int i=0;i<cycle.size()-1;i++)
        {
            cout << cycle[i] << " ";
        }
        cout << endl;
    // }

    return 0;
}
