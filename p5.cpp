#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define eb emplace_back
#define fi first
#define se second
#define sz(x) ((int)(x).size())

void solve()
{
    ll n, x, y;
    cin >> n;
    vector<pair<ll, ll>> v;
    vector<pair<ll, ll>> z;

    for (int i = 0; i < n; i++) {
        cin >> x >> y;
        v.push_back({x, y});
    }
    sort(v.begin(), v.end());

    ll p = v[0].fi;
    ll q = v[0].se;

    for (int i = 1; i < n; i++) {
        if (v[i].fi <= v[i - 1].se) {
            q = v[i].se;
        }
        else {
            z.pb({p, q});
            p = v[i].fi;
            q = v[i].se;
        }
    }
    if (q != z[sz(z) - 1].se) {
        z.pb({p, q});
    }

    ll ans = 0;
    for (int i = 0; i < sz(z); i++) {
        ans += (z[i].se - z[i].fi + 1);
    }

    cout << ans << endl;
}


signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    //freopen("moobuzz.in", "r", stdin);
    //freopen("moobuzz.out", "w", stdout);

    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}