#include <bits/stdc++.h>
using namespace std;
int mod = 1e9+7;

int f(int i, int sum, int a[], vector<vector<int>> &dp) {
    if(i==0) {
        return sum==a[0];
    }

    if(dp[i][sum] != -1) return dp[i][sum];

    int nottake = f(i-1, sum, a, dp)%mod;
    int take=0;
    if(a[i]<=sum) 
        take = f(i-1, sum-a[i], a, dp)%mod;

    return dp[i][sum] = (take + nottake)%mod;    
}

int main() {
    int n;
    cin>>n;

    int sum = n*(n+1)/2;
    if(sum%2==1) {
        cout<<0<<endl;
        return 0;
    }
    sum/=2;
    int a[n];
    for(int i=0;i<n;i++) {
        a[i] = i+1;
    }

    vector<vector<int>> dp(n+1, vector<int> (sum+1, -1));
    cout<< f(n-1, sum, a, dp);
}
