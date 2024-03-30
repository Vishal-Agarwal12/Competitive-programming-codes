#include <iostream>
#include <vector>
#include <algorithm>

bool isPossible(const std::vector<int> &patterns, int n, int k, int maxWaitingTime)
{
    int carversUsed = 1;
    int prevPattern = patterns[0];

    for (int i = 1; i < n; i++)
    {
        if (patterns[i] - prevPattern >= maxWaitingTime)
        {
            carversUsed++;
            prevPattern = patterns[i];
        }

        if (carversUsed == k)
            return true;
    }

    return false;
}

int findMaxWaitingTime(const std::vector<int> &patterns, int n, int k)
{
    int left = 0;
    int right = patterns[n - 1] - patterns[0];
    int maxWaitingTime = 0;

    while (left <= right)
    {
        int mid = left + (right - left) / 2;

        if (isPossible(patterns, n, k, mid))
        {
            maxWaitingTime = std::max(maxWaitingTime, mid);
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }

    return maxWaitingTime;
}

int main()
{
    int t;
    std::cin >> t;

    while (t--)
    {
        int n, k;
        std::cin >> n;
        std::vector<int> patterns(n);

        for (int i = 0; i < n; i++)
        {
            std::cin >> patterns[i];
        }

        std::sort(patterns.begin(), patterns.end());

        std::cin >> k;

        int maxWaitingTime = findMaxWaitingTime(patterns, n, k);

        std::cout << maxWaitingTime << std::endl;
    }

    return 0;
}
