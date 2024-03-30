long getMaxProfit(vector<int> pnl, int k)
{
    for (int j = 1; j <= k; j++)
    {
        long maxDiff = -pnl[0];
        for (int i = 2; i <= N; i++)
        {
            dp[i][j] = max(dp[i - 1][j] + pnl[i - 1], dp[i - 1][j - 1] + maxDiff);
            maxDiff = max(maxDiff, dp[i - 1][j - 1] - pnl[i - 2]);
            ans = max(ans, dp[i][j]);
        }
    }

    return ans;
}