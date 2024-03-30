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
#define debug(x) cout << #x << ": " << x << endl
#define debugArr(arr)                    \
    {                                    \
        cout << #arr << " : ";           \
        for (const auto &_element : arr) \
        {                                \
            cout << _element << ' ';     \
        }                                \
        cout << endl;                    \
    }
#define ARRAY_SUM(arr) ({                                        \
    decltype(arr[0]) _sum = 0;                                   \
    for (size_t _i = 0; _i < sizeof(arr) / sizeof(arr[0]); ++_i) \
    {                                                            \
        _sum += arr[_i];                                         \
    }                                                            \
    _sum;                                                        \
})
const ll Mod = 998244353;
const ll mod = 1e9 + 7;
const ll inf = 1e18;
// static_cast<int>(sqrt(number) + 0.5)

using namespace std;

void solve()
{
    ll n;
    cin >> n;
    string s, t;
    cin >> s >> t;

    string u = "", v = "";
    fo(i, n)
    {
        if (s[i] != 'b')
            u += s[i];
        if (t[i] != 'b')
            v += t[i];
    }
    if (u != v)
    {
        cout << "NO" << endl;
        return;
    }

    vector<ll> as, at, cs, ct;
    fo(i, n)
    {
        if (s[i] == 'a')
            as.pb(i);
        else if (s[i] == 'c')
            cs.pb(i);
        if (t[i] == 'a')
            at.pb(i);
        else if (t[i] == 'c')
            ct.pb(i);
    }

    fo(i, sz(as))
    {
        if (as[i] > at[i])
        {
            cout << "NO" << endl;
            return;
        }
    }
    fo(i, sz(cs))
    {
        if (cs[i] < ct[i])
        {
            cout << "NO" << endl;
            return;
        }
    }

    cout << "YES" << endl;
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
