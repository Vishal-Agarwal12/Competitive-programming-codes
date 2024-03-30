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

const ll Mod = 998244353;
const ll mod = 1e9 + 7;
const ll inf = 1e18;
// static_cast<int>(sqrt(number) + 0.5)

using namespace std;
ll nextPowerOf2(ll num)
{
    if (num <= 0)
    {
        return 1;
    }
    num--;
    num |= num >> 1;
    num |= num >> 2;
    num |= num >> 4;
    num |= num >> 8;
    num |= num >> 16;
    num++;

    return num;
}
void solve()
{
    ll n;
    cin >> n;

    ll a[n];
    fo(i, n) cin >> a[i];

    fo(i, n)
    {
        ll num = nextPowerOf2(a[i]);
        debug(num);
        ll ans = num - a[i];
        while (num != 32768)
        {
            ans++;
            num *= 2;
        }
        cout << ans << " ";
    }
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
