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

vector<ll> pp;
void SieveOfEratosthenes(int n) 
{ 
    bool prime[n + 1]; 
    memset(prime, true, sizeof(prime)); 
  
    for (int p = 2; p * p <= n; p++) { 
        if (prime[p] == true) { 
            for (int i = p * p; i <= n; i += p) 
                prime[i] = false; 
        } 
    } 
  
    for (int p = 2; p <= n; p++) 
        if (prime[p]) 
            pp.pb(p);
} 

void solve()
{
    ll n;
    cin>>n;
    ll a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    set<ll> s;
    for(int j=0;j<n;j++) {
        for(auto x: pp) {
            if(x*x > a[j]) break;
            if(a[j]%x!=0) continue;
            if(s.find(x) != s.end()) {
                cout<<"YES"<<endl;
                return;
            }
            s.insert(x);  
            while(a[j]%x == 0) {
                a[j]/=x;
            }
        }
        if(a[j] > 1) {
            if(s.find(a[j]) != s.end()) {
                cout<<"YES"<<endl;
                return;
            }
            s.insert(a[j]);
        }
    }

    cout<<"NO"<<endl;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    SieveOfEratosthenes(10000);
    int t;
    cin>>t;
    while(t--)
        solve();

    return 0;
}