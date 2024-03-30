#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, W;
    cin >> n >> W;

    int weigh[n];
    int price[n];
    for (int i = 0; i < n; i++) cin >> price[i];
    for (int i = 0; i < n; i++) cin >> weigh[i];

    vector<vector<int>> dp(n + 1, vector<int>(W + 1, 0));

    for (int i = 1; i <= n; i++) {
        for (int w = 1; w <= W; w++) {
            dp[i][w] = dp[i - 1][w];

            if (price[i - 1] <= w) {
                dp[i][w] = max(dp[i][w], weigh[i - 1] + dp[i - 1][w - price[i - 1]]);
            }
        }
    }

    cout << dp[n][W] << endl;
}
