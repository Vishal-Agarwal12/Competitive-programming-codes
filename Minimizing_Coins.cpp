#include <bits/stdc++.h>
#define ll long long
using namespace std;

int n, x;
int a[101];
int dp[101][1000005];

int rec(int level, int sum_taken)
{
    if (sum_taken == x)
        return 0;

    if (sum_taken > x || level == n)
        return 1e9; // Return a large value as a placeholder for infinity

    if (dp[level][sum_taken] != -1)
        return dp[level][sum_taken];

    int ans = min(rec(level + 1, sum_taken), 1 + rec(level, sum_taken + a[level]));

    dp[level][sum_taken] = ans;
    return ans;
}

void solve()
{
    cin >> n >> x;

    for (int i = 0; i < n; i++)
        cin >> a[i];

    memset(dp, -1, sizeof(dp)); // Initialize dp array with -1

    int result = rec(0, 0);
    if (result >= 1e9)
        cout << -1 << endl; // If the minimum value is still infinity, there is no valid solution
    else
        cout << result << endl;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
