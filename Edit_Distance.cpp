#include <bits/stdc++.h>
using namespace std;

int f(int i, int j, string &s, string &t, vector<vector<int>> &dp) {
    if(i<0) return j+1;
    if(j<0) return i+1;

    if(dp[i][j] != -1) return dp[i][j];
    if(s[i] == t[j]) 
        return f(i-1, j-1, s, t, dp);
    int add = 1 + f(i, j-1, s, t, dp);
    int rem = 1 + f(i-1, j, s, t, dp);
    int rep = 1 + f(i-1, j-1, s, t, dp);

    return dp[i][j] = min(add, min(rem, rep));    
}

int main() {
    string s,t;
    cin>>s>>t;

    int n = s.size();
    int m = t.size();
    vector<vector<int>> dp(n+1, vector<int> (m+1, -1));
    cout<< f(n-1, m-1, s, t, dp);
}
