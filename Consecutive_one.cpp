#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll n,k;
ll a[100100],pref[100100];

bool check(ll mid) {
    ll sum=0;
    for(int i=0;i<n-mid+1;i++) {
        sum = pref[mid+i-1] - (i>0 ? pref[i-1] : 0);
        if(mid-sum<=k) {
            return true;
        }
    }
    return false;
}

void solve()
{
    cin>>n>>k;
    for(int i=0;i<n;i++) {
        cin>>a[i];
    }

    for(int i=0;i<n;i++) {
        pref[i] = a[i];
        if(i) pref[i]+=pref[i-1];
    }

    ll lo = 0, hi = n, ans = -1;

    while(lo<=hi) {
        ll mid = lo+(hi-lo)/2;

        if(check(mid)) {
            ans = mid;
            lo = mid+1;
        }
        else hi = mid-1;
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