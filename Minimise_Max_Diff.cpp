#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll n,k;
ll a[100100];

bool check(ll mid) {
    ll cnt=0;
    for(int i=1;i<n;i++) {
        cnt+= (((a[i]-a[i-1])+mid-1)/mid)-1;
    }

    return cnt<=k;
}

void solve()
{
    cin>>n>>k;
    for(int i=0;i<n;i++) {
        cin>>a[i];
    }

    sort(a,a+n);
    ll lo = 1, hi = 0, ans = -1;
    for(int i=1;i<n;i++) {
        hi = max(hi, a[i]-a[i-1]);
    }

    while(lo<=hi) {
        ll mid = lo+(hi-lo)/2;

        if(check(mid)) {
            ans = mid;
            hi = mid-1;
        }
        else lo = mid+1;
    }

    cout<<ans<<endl;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    //freopen("moobuzz.in", "r", stdin);
    //freopen("moobuzz.out", "w", stdout);

    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}