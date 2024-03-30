#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const ll mod = 1e9 + 7;

int func(int sum, int nums[], int n, vector<int> &dp) {
    if (sum == 0) return 1;
    if (sum < 0) return 0;

    if(dp[sum] != -1) return dp[sum];
    int ans = 0;
    for (int i = 0; i < n; i++) {
        ans = (ans + func(sum - nums[i], nums, n, dp))%mod;
    }

    return dp[sum] = ans%mod;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, sum;
    cin >> n >> sum;

    int nums[n];
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    vector<int> dp(sum+1, -1);

    int result = func(sum, nums, n, dp);
    cout << result << endl;
}
