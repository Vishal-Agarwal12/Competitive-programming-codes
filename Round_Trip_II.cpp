#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
#define int long long int

int n, m;
vector<set<int>> g; // Adjacency list to represent the directed graph

vector<int> vis; // Visited array to keep track of visited nodes

stack<int> recursionStack; // Stack to track the current recursion stack during DFS

vector<bool> rsFlag; // Flag array to mark nodes in the recursion stack

// Depth-First Search (DFS) to check for cycles
bool dfs(int u)
{
    vis[u] = true;
    recursionStack.push(u);
    rsFlag[u] = true;

    for (auto v : g[u])
    {
        if (!vis[v])
            if (dfs(v))
                return true;

        if (rsFlag[v])
        {
            recursionStack.push(v);
            return true;
            // No more DFS; cycle detected
        }
    }

    recursionStack.pop();
    rsFlag[u] = false;
    return false;
    // No cycle was detected
}

// Visit all nodes in the graph
void visit_all()
{
    for (int u = 1; u <= n; ++u)
    {
        if (!vis[u])
        {
            if (dfs(u))
                break;
        }
    }
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n >> m; // Number of nodes and edges

    g.resize(n + 1); // Resize the adjacency list

    vis.resize(n + 1); // Resize the visited array

    rsFlag.resize(n + 1); // Resize the recursion stack flag array

    for (int i = 0; i < m; ++i)
    {
        int u, v;
        cin >> u >> v;
        g[u].insert(v); // Add directed edge from u to v
    }

    visit_all();

    if (recursionStack.empty())
    {
        cout << "IMPOSSIBLE" << endl;
        return 0;
    }

    vector<int> ans;
    int temp = recursionStack.top();

    // Extract the cycle from the recursion stack
    while (!recursionStack.empty())
    {
        ans.push_back(recursionStack.top());
        recursionStack.pop();
        if (ans.back() == temp and ans.size() != 1)
            break;
    }

    reverse(ans.begin(), ans.end());

    cout << ans.size() << endl;

    // Print the nodes in the cycle
    for (auto u : ans)
    {
        cout << u << " ";
    }
}
