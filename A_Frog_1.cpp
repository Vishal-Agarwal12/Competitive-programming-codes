#include <bits/stdc++.h>
using namespace std;

int f(int i, int a[], vector<int> &dp) {
    if(i==0) return 0;

    if(dp[i] != -1) return dp[i];

    int p1 = abs(a[i]-a[i-1]) + f(i-1, a, dp);
    int p2=INT_MAX;
    if(i>1) 
            p2 = abs(a[i]-a[i-2]) + f(i-2, a, dp);

    return dp[i] = min(p1, p2);
}

int main() {
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    vector<int> dp(n, -1);
    cout<< f(n-1, a, dp);
}
