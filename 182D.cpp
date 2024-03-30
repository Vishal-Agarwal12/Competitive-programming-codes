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

string a,b;
bool check(string s, ll m) {
	for(int i=0; i<s.size(); i++)
		if(a[i%m] != s[i]) return 0;
	return 1;
}

void solve() {
	cin>>a>>b; 
    ll cnt = 0;

	for(int i=1; i<=min(a.size(),b.size()); i++)
		if(a.size()%i == 0 && b.size()%i==0)
			if(check(a,i) & check(b,i)) cnt++;
	cout<<cnt;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    solve();

    return 0;
}
