#include <bits/stdc++.h>
using namespace std;

int n;
int w[110], v[110];

long long f(int i, long long W, vector<vector<long long>> &dp) {
    if(i == 0) {
        if(w[0] <= W) return v[0];
        return 0;
    }

    if(dp[i][W] != -1) return dp[i][W];

    long long nottake = 0 + f(i-1, W, dp);
    long long take=0;
    if(w[i] <= W) 
        take = v[i] + f(i-1, W-w[i], dp);

    return dp[i][W] = max(take, nottake);    
}

int main() {
    long long W;
    cin >> n >> W;
    for(int i=0;i<n;i++) {
        cin>>w[i]>>v[i];
    }

    vector<vector<long long>> dp(n+1, vector<long long> (W+1, -1));
    cout<< f(n-1, W, dp);
}
