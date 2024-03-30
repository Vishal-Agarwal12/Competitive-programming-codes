#include <bits/stdc++.h>
using namespace std;


void solve()
{
    int n;
    cin>>n;
    int fg=0;
    for(int i=0;i<=n;i++) {
        fg=0;
        for(int j=1;j<=9;j++) {
            if(i==0) {
                cout<<1;
                fg=1;
                break;
            }
            if((n%j==0) && (i % (n/j)) == 0) {
                cout<<j;
                fg=1;
                break;
            }
        }
        if(fg==0) cout<<"-";
    }
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}