#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
    ll n,k;
    cin>>n>>k;
    string s(n,'a');

    for(int i = n-2;i>=0;i--) {
        if(k<=n-i-1) {
            s[i] = 'b';
            s[n-k] = 'b';
            break;
        }
        k-=n-i-1;
    }
    cout<<s<<endl;
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

