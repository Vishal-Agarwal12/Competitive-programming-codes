#include <bits/stdc++.h>
using namespace std;

int dfs(int node, vector<int> adj[], vector<int> &descendants, vector<int> &vis) {
    if (!vis[node]) {
        vis[node] = 1;
        descendants[node] = 0; 
        for (auto x : adj[node]) {
            if (!vis[x]) {
                descendants[node] += 1 + dfs(x, adj, descendants, vis); 
            }
        }
    }

    return descendants[node]; 
}

int main() {
    int n;
    cin >> n;

    int a[n - 1];
    for (int i = 0; i < n - 1; i++) {
        cin >> a[i];
        a[i]--;
    }

    vector<int> adj[n];
    for (int i = 0; i < n - 1; i++) {
        adj[i + 1].push_back(a[i]);
        adj[a[i]].push_back(i + 1);
    }

    vector<int> vis(n, 0);
    vector<int> descendants(n, 0);

    dfs(0, adj, descendants, vis);

    for (auto x : descendants) {
        cout << x << " ";
    }
}
