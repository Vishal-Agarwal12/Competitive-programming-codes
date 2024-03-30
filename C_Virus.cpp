#include <iostream>
#include <vector>
#include <queue>
#include <cmath>

void solve()
{
    int n;
    double d;
    std::cin >> n >> d;

    std::vector<std::pair<double, double>> v(n);
    for (int i = 0; i < n; i++)
    {
        double x, y;
        std::cin >> x >> y;
        v[i] = {x, y};
    }

    std::vector<bool> a(n, false);
    std::queue<int> q;
    q.push(0);
    a[0] = true;

    while (!q.empty())
    {
        int current = q.front();
        q.pop();

        for (int j = 0; j < n; j++)
        {
            if (!a[j])
            {
                double distance = std::sqrt(std::pow(v[current].first - v[j].first, 2) + std::pow(v[current].second - v[j].second, 2));
                if (distance <= d)
                {
                    a[j] = true;
                    q.push(j);
                }
            }
        }
    }

    for (bool result : a)
    {
        if (result)
        {
            std::cout << "Yes" << std::endl;
        }
        else
        {
            std::cout << "No" << std::endl;
        }
    }
}

int main()
{
    solve();

    return 0;
}
