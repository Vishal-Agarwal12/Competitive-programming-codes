#include <bits/stdc++.h>
using namespace std;
char grid[1010][1010];
const int mod = 1e9+7;

int f(int i, int j, vector<vector<int>> &dp) {
    if(i>=0 && j>=0 && grid[i][j] == '*') return 0; 
    if(i==0 && j==0) return 1;
    if(i<0 || j<0) return 0;

    if(dp[i][j] != -1) return dp[i][j];
    int p1 = f(i, j-1, dp)%mod;
    int p2 = f(i-1, j, dp)%mod;

    return dp[i][j] = (p1+p2)%mod;
}

int main() {
    int n;
    cin >> n;

    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            cin>>grid[i][j];
        }
    }
    vector<vector<int>> dp(n+1, vector<int> (n+1, -1));
    cout<< f(n-1, n-1, dp);
}
