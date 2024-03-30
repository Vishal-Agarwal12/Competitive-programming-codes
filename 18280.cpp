#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
    ll n;
    cin>>n;

    if(n%2==0) {
        for(int i=1;i<=n;i++) {
            cout<<2*i<<" ";
        }
        cout<<endl;
    }
    else {
        for(int i=1;i<=n;i++) {
            cout<<i<<" ";
        }
        cout<<endl;
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

