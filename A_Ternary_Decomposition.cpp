#include <bits/stdc++.h>
#include <vector>

bool isSumOfPowersOf3(long long sum, long long k)
{
    std::vector<std::vector<bool>> dp(sum + 1, std::vector<bool>(k + 1, false));
    dp[0][0] = true;

    for (long long i = 0; i <= sum; i++)
    {
        for (long long j = 1; j <= k; j++)
        {
            if (i >= pow(3, j))
                dp[i][j] = dp[i][j] || dp[i - pow(3, j)][j - 1];
            dp[i][j] = dp[i][j] || dp[i][j - 1];
        }
    }

    return dp[sum][k];
}

int main()
{
    int t;
    std::cin >> t;
    while (t--)
    {
        long long sum, k;
        std::cin >> sum >> k;

        bool possible = isSumOfPowersOf3(sum, k);

        if (possible)
            std::cout << "Yes" << std::endl;
        else
            std::cout << "No" << std::endl;
    }

    return 0;
}
