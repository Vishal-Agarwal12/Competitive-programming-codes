#include <bits/stdc++.h>
#define ll long long
using namespace std;

vector<ll> compute_prefix_function(string s)
{
    ll n = s.size();
    vector<ll> pi(n, 0);
    for (ll i = 1, j = 0; i < n; i++)
    {
        while (j > 0 && s[i] != s[j])
        {
            j = pi[j - 1];
        }
        if (s[i] == s[j])
        {
            j++;
        }
        pi[i] = j;
    }
    return pi;
}

void solve()
{
    string s;
    cin >> s;
    ll n = s.size();

    vector<ll> pi = compute_prefix_function(s);
    vector<ll> borders;

    for (ll i = pi[n - 1]; i > 0; i = pi[i - 1])
    {
        borders.push_back(i);
    }

    sort(borders.begin(), borders.end());
    for (ll i = 0; i < borders.size(); i++)
    {
        cout << borders[i] << " ";
    }
    cout << "\n";
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
