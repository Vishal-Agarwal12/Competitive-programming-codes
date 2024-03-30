#include <bits/stdc++.h>

#define ll long long
#define ull unsigned long long
#define ld long double
#define vl vector<ll>
#define pb push_back
#define eb emplace_back
#define fi first
#define se second
#define mp make_pair
#define endl '\n';
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define setbits(x) __builtin_popcountll(x)
#define pqb priority_queue<int>                            // maxheap
#define pqs priority_queue<int, vector<int>, greater<int>> // minheap
#define uniquev(v) sort(all(v)), (v).resize(unique(all(v)) - (v).begin())
#define pw(x) (1LL << (x))
#define cyes cout << "YES" << '\n'
#define cno cout << "NO" << '\n'
#define fo(i, n) for (int(i) = 0; (i) < (n); (i)++)
#define foo(i, n) for (int(i) = 1; (i) <= (n); (i)++)
#define minv(a) *min_element(all(a))
#define maxv(a) *max_element(all(a))

const ll Mod = 998244353;
const ll mod = 1e9 + 7;
const ll inf = 1e18;

using namespace std;

void solve()
{
    ll n, m, num, x;
    cin >> n;
    vector<vector<ll>> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> m;
        for (int j = 0; j < m; j++)
        {
            cin >> num;
            v[i].push_back(num);
        }
    }
    cin >> x;

    vector<pair<ll, ll>> vp;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < v[i].size(); j++)
        {
            if (v[i][j] == x)
            {
                vp.push_back({v[i].size(), i + 1});
                break;
            }
        }
    }

    ll mn = 1e5, cnt = 0;
    for (int i = 0; i < vp.size(); i++)
    {
        mn = min(mn, vp[i].first);
    }

    vector<ll> ans;
    for (int i = 0; i < vp.size(); i++)
    {
        if (vp[i].first == mn)
        {
            ans.push_back(vp[i].second);
        }
    }

    cout << ans.size() << endl;
    for (auto y : ans)
        cout << y << " ";
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
