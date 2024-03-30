#include <bits/stdc++.h>
using namespace std;

int minOperations(int n, vector<int>& dp) {
    if (n == 0) return 0;
    
    if (dp[n] != -1) return dp[n];

    int min_ops = INT_MAX, mini = INT_MAX;;
    string num_str = to_string(n);
    for (char c : num_str) {
        int digit = c - '0';
        if (digit != 0) {
            min_ops = 1 + minOperations(n - digit, dp);
            mini = min(mini, min_ops);
        }
    }

    return dp[n] = mini;
}

int main() {
    int n;
    cin >> n;
    vector<int> dp(n + 1, -1);
    cout<< minOperations(n, dp);
}
