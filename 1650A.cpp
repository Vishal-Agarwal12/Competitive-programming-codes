#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
    string s;
    char t;
    cin>>s>>t;

    for(int i=0;i<s.size();i+=2) {
        if(s[i]==t) {
            cout<<"YES\n";
            return;
        }
    }
    cout<<"NO\n";
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

