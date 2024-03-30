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

void solve()
{
    ll n;
    cin >> n;

    ll a[n];
    fo(i, n)
    {
        cin >> a[i];
    }

    sort(a, a + n);
    vector<ll> v;
    fo(i, n) {
        if(a[n-1]-a[i]!=0) {
            v.pb(a[n - 1] - a[i]);
        }
    }

    ll l = 0, r = 1e18;
    while (l < r)
    {
        ll mid = (r - l) / 2 + l;

        ll even = mid / 2;
        ll odd = (mid + 1) / 2;
        even*=2;
        for(int i=0;i<v.size();i++) {
            if(v[i]%2==0) {
                if(even) {
                    e
                }
            }
            else odd-=
        }
        if (sum >= tot)
        {
            r = mid;
        }
        else
        {
            l = mid + 1;
        }
    }

    cout << l << endl;
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
