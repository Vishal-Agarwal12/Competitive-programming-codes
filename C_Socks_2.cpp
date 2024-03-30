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

#include <iostream>
#include <set>
#include <vector>
#include <algorithm>

using namespace std;

#define ll long long

void solve() {
    ll n, k;
    cin >> n >> k;

    vector<ll> a(k);
    for (int i = 0; i < k; i++)
        cin >> a[i];

    set<ll> s(a.begin(), a.end());

    ll ans = 0;
    vector<pair<ll, pair<ll, ll>>> v;

    if (k % 2 == 0) {
        for (int i = 0; i < k - 1; i += 2) {
            ans += a[i + 1] - a[i];
        }
        cout << ans << endl;
        return;
    } 
    else {
        ll mn = 0;
        for (int i = 0; i < k - 1; i++) {
            v.push_back({a[i + 1] - a[i], {a[i], a[i + 1]}});
        }
        sort(v.begin(), v.end()); 

        ll j = 0, tmp = 0;
        while (tmp <= k / 2 && j < v.size()) { 
            if (s.count(v[j].second.first) && s.count(v[j].second.second)) {
                mn += v[j].first;
                s.erase(v[j].second.first);
                s.erase(v[j].second.second);
                tmp++;
            }
            j++;
        }
        cout << mn << endl;
    }
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
