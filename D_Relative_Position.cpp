#include <bits/stdc++.h>
using namespace std;

char nl = '\n';
char sp = ' ';
using ll = long long;
using vb = vector<bool>;
using vl = vector<ll>;
using vvb = vector<vb>;
using vvl = vector<vl>;
using sl = unordered_set<ll>;
using tsl = set<ll>;
using pll = pair<ll, ll>;
using vpll = vector<pll>;

void solve()
{
    ll n, m;
    cin >> n >> m;
    ll a, b, c, d;

    vector<pair<ll, ll>> mp(n + 1, {LLONG_MIN, LLONG_MIN});
    tsl processed_keys;

    mp[1] = {0, 0};
    processed_keys.insert(1);

    for (int i = 0; i < m; i++)
    {
        cin >> a >> b >> c >> d;
        if(processed_keys.count(a) != 0 && processed_keys.count(b) != 0) {
            continue;
        }
        else if (processed_keys.count(a) == 0)
        {
            mp[a] = {mp[b].first - c, mp[b].second - d};
            processed_keys.insert(a);
        }
        else
        {
            mp[b] = {mp[a].first + c, mp[a].second + d};
            processed_keys.insert(b);
        }

        if (processed_keys.size() == n)
        {
            break; 
        }
    }

    for (ll i = 1; i <= n; i++)
    {
        if (mp[i].first != LLONG_MIN)
        {
            cout << mp[i].first << " " << mp[i].second << nl;
        }
        else
        {
            cout << "undecidable" << nl;
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
