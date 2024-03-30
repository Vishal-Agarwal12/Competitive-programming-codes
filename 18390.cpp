#include <iostream>
#include <cmath>

#define ll long long

void solve()
{
    int n, k;
    std::cin >> n >> k;

    if (k == 1)
    {
        std::cout << n << std::endl;
        return;
    }

    std::cout << std::ceil(static_cast<double>(n) / k) + 1 << std::endl;
}

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t;
    std::cin >> t;
    while (t--)
        solve();

    return 0;
}
