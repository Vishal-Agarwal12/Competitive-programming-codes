#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
    ll n;
    cin>>n;

    string s;
    cin>>s;

    ll a=0,b=0,c=0;
    for(int i=0;i<s.size();i++) {
        if(s[i]=='A') a++;
        if(s[i]=='B') b++;
        if(s[i]=='C')c++;
        if(a && b && c)  {
            cout<<i+1<<endl;
            return;
        }
    }
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
     
        solve();

    return 0;
}

