#include <bits/stdc++.h>

using namespace std;
typedef pair<int, int> pii;
const int maxN = 1e5 + 1;
const int maxM = 2e5 + 1;

int N, M, deg[maxN];
bool tour_exists, used[maxM];
vector<pii> G[maxN];
vector<int> tour;
stack<int> S;

int main()
{
    scanf("%d %d", &N, &M);

    // Read the input and construct the adjacency list representation of the graph
    for (int i = 0, a, b; i < M; i++)
    {
        scanf("%d %d", &a, &b);
        G[a].push_back({b, i});
        G[b].push_back({a, i});
        deg[a]++;
        deg[b]++;
    }

    tour_exists = true;

    // Check if the graph satisfies the necessary condition for having an Eulerian circuit
    for (int i = 1; i <= N; i++)
        if (deg[i] & 1)
            tour_exists = false;

    // If the graph does not satisfy the condition, print "IMPOSSIBLE" and terminate
    if (!tour_exists)
    {
        printf("IMPOSSIBLE\n");
        return 0;
    }

    S.push(1);

    // Start the Hierholzer's algorithm from vertex 1
    while (!S.empty())
    {
        int u = S.top();

        // If the current vertex has remaining edges
        if (deg[u])
        {
            while (!G[u].empty())
            {
                int v = G[u].back().first;
                int id = G[u].back().second;
                G[u].pop_back();

                // If the edge (u, v) is unused, remove it from the graph
                if (!used[id])
                {
                    deg[u]--;
                    deg[v]--;
                    used[id] = true;

                    // Push the destination vertex onto the stack
                    S.push(v);
                    break;
                }
            }
        }
        else
        {
            // If there are no remaining edges, add the current vertex to the Eulerian circuit and pop it from the stack
            tour.push_back(u);
            S.pop();
        }
    }

    // Check if the size of the Eulerian circuit is correct
    if ((int)tour.size() != M + 1)
        printf("IMPOSSIBLE\n");
    else
        // Print the vertices of the Eulerian circuit in order
        for (int i = 0; i <= M; i++)
            printf("%d%c", tour[i], (" \n")[i == M]);
}
