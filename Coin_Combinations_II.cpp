#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const ll mod = 1000000007;
ll dp[1000001];

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, x;
	cin >> n >> x;
	vector<ll> coins(n);
	for (int i = 0; i < n; i++) { cin >> coins[i]; }
	dp[0] = 1;
	for (int i = 1; i <= n; i++) {
		for (int weight = 0; weight <= x; weight++) {
			if (weight - coins[i - 1] >= 0) { 
				dp[weight] += dp[weight - coins[i - 1]];
				dp[weight] %= mod;
			}
		}
	}
	cout << dp[x] << '\n';
}
