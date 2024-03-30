#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#endif

using ll = long long;
using maxheap = priority_queue<ll>; // maxheap
using minheap = priority_queue<ll, vector<ll>, greater<ll>>; // minheap
#define all(a) (a).begin(), (a).end()
#define rall(a) (a).rbegin(), (a).rend()
#define sort_and_unique(a) \
    sort(all(a));          \
    (a).resize(unique(all(a)) - (a).begin())
#define minv(a) *min_element(all(a))
#define maxv(a) *max_element(all(a))
#define pb push_back
#define eb emplace_back
#define fi first
#define se second
#define ins insert
#define sz(x) ((int)(x).size())
#define pw(x) (1LL << (x))
#define setbits(x) __builtin_popcountll(x)
const ll Mod = 998244353;
const ll mod = 1e9 + 7;
const ll inf = 1e18;

void solve()
{
    int n;
    cin>>n;

    vector<string> v(n);
    for(auto &e: v)     cin>>e;

    ll ans = 0;

    vector<map<int, int>> mp(6);

    vector<pair<int, string>> vs;
    for(auto e: v)      vs.pb({e.size(), e});

    sort(vs.begin(), vs.end());
    // cout<<vs;
    v.clear();
    for(auto e: vs)     v.pb(e.se);
    cout<<v;
    for(auto s: v)
    {
        int tot = 0;

        for(auto d: s)
            tot += (d - '0');

        int a=0, b=0;

        for(int len=s.size()+2-s.size()%2; len<=10; len+=2)
        {
            if(len > 2*s.size())        break;

            a=0, b=0;

            for(int i=0; i<s.size()-len/2; i++)
            {
                a += s[i]-'0';
                b += s[s.size()-i-1]-'0';
            }

            ans += mp[len-s.size()][tot-2*a];
            ans += mp[len-s.size()][tot-2*b];
        }

        mp[s.size()][tot]++;
        ans++;
    }

    cout<<ans<<"\n";
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
