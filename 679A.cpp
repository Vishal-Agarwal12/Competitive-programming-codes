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

ll c = 0;
string s;
bool isprime(int n) {
    for(int i=2;i*i<=n;i++) {
        while(n%i == 0) {
            n/=i;
            return false;
        }
    }
    return true;
}

void solve()
{       
    vector<ll> v={4,9,25,49};
    for(int i=0;i<4;i++) {
        cout<<v[i]<<endl;
        cin>>s;
        if(s=="yes") {
            cout<<"composite"<<endl;
            cout<<flush<<endl;
        }
    }

    for(int i=2;i<=50;i++) {
        if(isprime(i)) {
            cout<<i<<endl;
            cin>>s;
            if(s=="yes") c++;
        }
    }
    if(c>=2) {
        cout<<"composite"<<endl;
    }
    else cout<<"prime"<<endl;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
