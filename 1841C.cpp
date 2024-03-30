#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
    string s;
    cin>>s;
    ll n = s.size();
    ll a =1,b=10,c=100,d=1000,e=10000;
    ll ans=0;

    ll fg=0;
    char ch= 'A';
    for(int i=0;i<n;i++) {
        ch = maxi(ch, s[i]);
    }
    map<ll,char> mp;
    if(ch!='E') {
        s[0] = 'E';
        mp[n-1] = s[n-1];
        maxi = s[n-1];
        for(int i=n-1;i>=0;i--) {
            maxi = max(maxi, )
            mp[i] = 
        }
    }
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin>>t;
    while(t--) 
        solve();

    return 0;
}

