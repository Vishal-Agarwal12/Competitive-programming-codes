#include <iostream>
#include <vector>
#include <unordered_set>

int main()
{
    int t;
    std::cin >> t;

    while (t--)
    {
        int n;
        std::cin >> n;

        std::unordered_set<int> vertices;
        vertices.insert(1);

        for (int i = 1; i <= n; ++i)
        {
            int u, v;
            std::cin >> u >> v;
            vertices.insert(v);
        }

        int iterations = vertices.size() - 1;
        std::cout << iterations << std::endl;
    }

    return 0;
}
