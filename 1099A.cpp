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
    int w, h, x2, y2, x3, y3;
    cin >> w >> h >> x2 >> y2 >> x3 >> y3;

    while (h)
    {
        w += h;
        if (h == y2)
        {
            w = max(0, w - x2);
        }
        if (h == y3)
        {
            w = max(0, w - x3);
        }
        h--;
    }

    cout << w << endl;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
