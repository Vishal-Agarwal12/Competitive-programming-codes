#include <bits/stdc++.h>
using namespace std;

int f(int i, int k, int a[], int n, vector<int> &dp) {
    if(i==n-1) return 0;

    if(dp[i] != -1) return dp[i]; 

    int cost = INT_MAX;
    for(int it=1;it<=k;it++) {
        if(i+it<n)
            cost = min(cost, abs(a[i]-a[i+it]) + f(i+it, k, a, n, dp));
    }

    return dp[i] = cost;
}

int main() {
    int n,k;
    cin >> n >> k;

    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    vector<int> dp(n+1, -1);
    cout<< f(0, k, a, n, dp);
}
