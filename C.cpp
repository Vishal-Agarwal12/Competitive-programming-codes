#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll hihi(const std::vector<ll> &sortedVector, ll target)
{
    auto it = std::lower_bound(sortedVector.begin(), sortedVector.end(), target);
    if (it != sortedVector.end())
    {
        return std::distance(sortedVector.begin(), it);
    }
    return -1;
}
void solve()
{
    vector<ll> v{-4, -2, 0, 5, 6, 10};
    cout << hihi(v, -10);
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
