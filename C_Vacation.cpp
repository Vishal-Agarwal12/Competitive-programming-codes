#include <bits/stdc++.h>
using namespace std;

int n;
int a[100100][3];

int f(int i, int last, vector<vector<int>> &dp) {
    if(i==0) {
        int ans=0;
        for(int it=0;it<3;it++) {
            if(it != last)
            ans = max(ans, a[0][it]);
        }
        return ans;
    }

    if(dp[i][last] != -1) return dp[i][last];

    int points = INT_MIN;
    for(int it=0;it<3;it++) {
        if(it != last) {
            points = max(points, a[i][it] + f(i-1, it, dp));
        }
    }

    return dp[i][last] = points;
}

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> a[i][0] >> a[i][1] >> a[i][2];
    }

    vector<vector<int>> dp(n+1, vector<int> (4, -1));
    cout<< f(n-1, 3, dp);
}
