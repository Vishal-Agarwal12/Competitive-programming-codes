#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
    string s = "abcabca";

    ll n = s.size();
    const ll p = 31;
    const ll m = 1e9 + 9;

    vector<ll> p_pow(n);
    p_pow[0] = 1;
    for (int i = 1; i < n; i++)
    {
        p_pow[i] = (p_pow[i - 1] * p) % m;
    }

    vector<ll> h(n + 1, 0);
    for (int i = 1; i <= n; i++)
    {
        h[i] = (h[i - 1] + (s[i - 1] - 'a' + 1) * p_pow[i - 1]) % m;
    }

    ll h12 = (h[2] + m) % m;
    cout << h12 << '\n';

    ll h45 = (h[5] - h[3] + m) % m;
    h45 = (h45 * p_pow[2]) % m; // Correct the power calculation
    cout << h45;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
