#include <iostream>
#include <vector>

int minOperations(std::vector<int>& arr, int k) {
    int n = arr.size();
    std::vector<int> dp(n, 0);

    // Initialize dp array
    dp[0] = (arr[0] < k) ? k - arr[0] : 0;

    for (int i = 1; i < n; i++) {
        // Calculate the increment needed for the current element
        int increment = std::max(0, k - arr[i]);
        
        // Update the dp array based on the previous state
        dp[i] = dp[i - 1] + increment;
        
        // Ensure that we only consider the last three elements
        if (i >= 2) {
            dp[i] = std::min(dp[i], dp[i - 3]);
        }
    }

    return dp[n - 1];
}

int main() {
    std::vector<int> arr = {1, 2, 2, 1, 0};
    int k = 4;

    int minOps = minOperations(arr, k);

    std::cout << "Minimum operations needed: " << minOps << std::endl;

    return 0;
}
