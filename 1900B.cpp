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
using mll = map<ll, ll>;
using umll = unordered_map<ll, ll>;
using maxheap = priority_queue<ll>;                  // maxheap
using minheap = priority_queue<ll, vl, greater<ll>>; // minheap
using pqm = priority_queue<pll>;

#define tp3(T) tuple<T, T, T>
#define tp4(T) tuple<T, T, T, T>

#define all(a) (a).begin(), (a).end()
#define rall(a) (a).rbegin(), (a).rend()
#define sort_and_unique(a) \
    sort(all(a));          \
    (a).resize(unique(all(a)) - (a).begin())

#define fo(i, n) for (int(i) = 0; (i) < (n); (i)++)
#define foo(i, n) for (int(i) = 1; (i) <= (n); (i)++)
#define minv(a) *min_element(all(a))
#define maxv(a) *max_element(all(a))
#define pb push_back
#define eb emplace_back
#define fi first
#define se second
#define sz(x) ((int)(x).size())
#define pw(x) (1LL << (x))
#define setbits(x) __builtin_popcountll(x)

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

void yesno(bool a)
{
    cout << (a ? "Yes\n" : "No\n");
}

template <typename L, typename R>
ostream &operator<<(ostream &out, const pair<L, R> &p)
{
    out << '(' << p.first << ',' << p.second << ')';
    return out;
}

template <typename T1, typename T2, typename T3>
ostream &operator<<(ostream &out, const tuple<T1, T2, T3> &tp)
{
    auto &[t1, t2, t3] = tp;
    out << '(' << t1 << ',' << t2 << ',' << t3 << ')';
    return out;
}

template <typename T>
ostream &operator<<(ostream &out, const vector<T> &v)
{
    for (auto &i : v)
        out << i << ' ';
    out << nl;
    return out;
}

template <typename T, size_t N>
ostream &operator<<(ostream &out, const array<T, N> &arr)
{
    for (const auto &element : arr)
        out << element << ' ';
    out << nl;
    return out;
}

template <typename T>
ostream &operator<<(ostream &out, const set<T> &v)
{
    for (auto &i : v)
        out << i << ' ';
    out << nl;
    return out;
}

template <typename T>
ostream &operator<<(ostream &out, const unordered_set<T> &v)
{
    for (auto &i : v)
        out << i << ' ';
    out << nl;
    return out;
}

template <typename K, typename V>
ostream &operator<<(ostream &out, const map<K, V> &m)
{
    out << '[';
    for (auto &[k, v] : m)
    {
        out << k << ':' << v << sp;
    }
    out << "]\n";
    return out;
}

template <typename K, typename V>
ostream &operator<<(ostream &out, const unordered_map<K, V> &m)
{
    out << '[';
    for (auto &[k, v] : m)
    {
        out << k << ':' << v << sp;
    }
    out << "]\n";
    return out;
}

template<typename T>
istream& operator >>(istream& istream, vector<T>& v) {
    for(auto& element : v) {
        cin >> element;
    }
    return istream;
}

const ll Mod = 998244353;
const ll mod = 1e9 + 7;
const ll inf = 1e18;

void solve()
{
    ll a,b,c;
    cin>>a>>b>>c;

    ll a1 = 0, b1 = 0, c1 = 0;

    if(b==c) a1 = 1;
    if(a==b) c1 = 1;
    if(a==c) b1 = 1;

    if(abs(b-c)%2==0) a1 = 1;
    if(abs(a-c)%2==0) b1 = 1;
    if(abs(a-b)%2==0) c1 = 1;

    cout<<a1<<" "<<b1<<" "<<c1<<endl;
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