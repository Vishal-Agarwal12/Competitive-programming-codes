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
    ll n;
    cin >> n;
    ll a[n];
    fo(i, n) cin >> a[i];
    vector<ll> b, c;

    sort(a, a + n);
    if (a[0] == a[n - 1])
    {
        cout << -1 << endl;
        return;
    }

    b.push_back(a[0]);
    ll id = 0;
    for (int i = 1; i < n; i++)
    {
        if (a[i] == a[i - 1])
            b.push_back(a[i]);
        else
        {
            id = i;
            break;
        }
    }
    for (int i = id; i < n; i++)
        c.push_back(a[i]);

    cout << sz(b) << " " << sz(c) << endl;
    for (auto x : b)
        cout << x << " ";
    cout << endl;
    for (auto x : c)
        cout << x << " ";
    cout << endl;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}
