#include <iostream>
#include <vector>
#include <string>
#define ll long long
using namespace std;

void solve()
{
    ll n, c, q;
    cin >> n >> c >> q;
    string s;
    cin >> s;

    vector<pair<ll, ll>> len(c), query(c);
    ll curr = n;

    for (ll i = 0; i < c; ++i)
    {
        cin >> query[i].first >> query[i].second;
        ll qlen = query[i].second - query[i].first + 1;

        len[i].first = curr + 1, len[i].second = curr + qlen;
        curr = len[i].second;
    }

    while (q--)
    {
        ll idx;
        cin >> idx;

        for (ll i = c - 1; i >= 0; --i)
        {
            if (idx >= len[i].first && idx <= len[i].second)
            {
                ll gap = idx - len[i].first;
                idx = query[i].first + gap;
            }
        }

        cout << s[idx - 1] << endl;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}
