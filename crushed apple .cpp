#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
    while(t--)
    {
        ll a,b; cin>>a>>b;
        if(a<b) cout<<"NO\n";
        else
        {
            while(a%2==0)
            {
                a/=2;
            }
            if(b%a==0) cout<<"YES\n";
            else cout<<"NO\n";
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

