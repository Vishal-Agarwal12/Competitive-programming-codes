#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll n;
ll w[110], v[110];

ll f(ll i, ll val, vector<vector<int>> &dp) {
    if(val == 0) return 0;
    if(i<0) return 1e9;

    if(dp[i][val] != -1) return dp[i][val];    

    ll nottake = f(i - 1, val, dp);
    ll take = INT_MAX;
    if (v[i] <= val)
        take = w[i] + f(i - 1, val - v[i], dp);

    return dp[i][val] = min(take, nottake);
}

int main() {
    ll W;
    cin >> n >> W;
    for (int i = 0; i < n; i++) {
        cin >> w[i] >> v[i];
    }
    int val = 0;
    for(int i=0;i<n;i++) val += v[i];

    vector<vector<int>> dp(n+1, vector<int> (val+1, -1));
    for(int i=val;i>=0;i--) {
        if(f(n-1, i, dp) <= W) {
            cout<< i;
            break;
        }
    }
}
