#include <bits/stdc++.h>
#define ll long long
using namespace std;

int dp[1000006];

int rec(int sum)
{
    int ans = 0;
    if (sum == 0)
        return 1;
    if (sum < 0)
        return 0;

    for (int choice = 1; choice <= 6; choice++)
    {
        int ways = rec(sum - choice);
        ans = (ans + ways) % (int)(1e9 + 7);
    }

    return ans;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int sum;
    cin >> sum;
    cout << rec(sum);

    return 0;
}
