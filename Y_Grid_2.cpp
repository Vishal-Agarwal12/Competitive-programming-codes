#include <bits/stdc++.h>
using namespace std;

int grid[100100][100100];
int mod = 1e9+7;

int f(int i, int j, vector<vector<int>> &dp) {
    if(i>=0 && j>=0 && grid[i][j] == 0) return 0;
    if(i==0 && j==0) return 1;
    if(i<0 || j<0) return 0;

    if(dp[i][j] != -1) return dp[i][j];
    int p1 = f(i-1, j, dp)%mod;
    int p2 = f(i, j-1, dp)%mod;

    return dp[i][j] = (p1+p2)%mod;
}

int main() {
    int n,m,k,a,b;
    cin>>n>>m>>k;
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            grid[i][j] = 1;
        }
    }
    for(int i=0;i<k;i++) {
        cin>>a>>b;
        grid[a-1][b-1] = 0;
    }
    vector<vector<int>> dp(n+1, vector<int> (m+1, -1));
    cout<< f(n-1, m-1, dp);
}
