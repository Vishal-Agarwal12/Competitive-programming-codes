#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n,mn=0,mx=0;
    cin >> n;

    if (n < 4 || n % 2 == 1)
    {
        cout << -1 << endl;
    }
    else if (n % 4 == 0 && n % 6 == 0)
    {
        cout << n / 6 << " " << n / 4 << endl;
    }
    else if(n==4 || n==6) {
        cout<<1<<" "<<1<<endl;
    }
    else if(n%2==0 && n>=8) {
        ll ne = n;
        while(ne%4!=0) {
            ne-=6;
            mn++;
        }
        mn+=(ne/4);
        ne = n;
        while(ne%6!=0) {
            ne-=4;
            mx++;
        }
        mx+=(ne/6);
        cout<<mx<<" "<<mn<<endl;
    }
    else
        cout << -1 << endl;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}
