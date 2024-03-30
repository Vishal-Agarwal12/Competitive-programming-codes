#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
    ll n;
    cin>>n;
    ll a[n];
    for(int i=0;i<n;i++) {
        cin>>a[i];
    }
    sort(a,a+n);
    if(a[0]<0) cout<<a[0]<<endl;
    else cout<<a[n-1]<<endl;
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

