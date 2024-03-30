#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> adj; // Adjacency list representation of the tree
vector<int> path; // To store the path

void dfs(int node, int target, vector<bool>& visited) {
    visited[node] = true;
    path.push_back(node);

    if (node == target) {
        // Path found, do something with it (print or store)
        for (int vertex : path) {
            cout << vertex << " ";
        }
        cout << endl;
    } else {
        for (int neighbor : adj[node]) {
            if (!visited[neighbor]) {
                dfs(neighbor, target, visited);
            }
        }
    }

    path.pop_back(); // Backtrack while unwinding the recursion
    // visited[node] = false;
}

int main() {
    int n; // Number of nodes in the tree
    cin >> n;

    adj.resize(n + 1);
    vector<bool> visited(n + 1, false);

    // Assuming the tree edges are given as input
    cout << "Enter tree edges (node pairs):" << endl;
    for (int i = 1; i < n; ++i) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    int a, b;
    cout << "Enter nodes a and b to find the path from a to b: ";
    cin >> a >> b;

    cout << "Path from " << a << " to " << b << ":" << endl;
    dfs(a, b, visited);

    return 0;
}
