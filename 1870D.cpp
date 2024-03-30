#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
    ll n,x,k;
    cin>>n;

    map<ll,ll> mp;
    for(int i=0;i<n;i++) {
        cin>>x;
        mp[x] = i;
    }
    cin>>k;

    int prev = -1;
    int pval = 0, diff = 0, times=-1;
    vector<ll> ans(n);
    for(auto y: mp) {
        if(k==0) break;
        diff = y.first - pval;
        if(k >= diff && y.second > prev) {
            
            if(k/diff >= times) {
                ans[y.second] = times;
                times = k/diff;
                k-=diff;
            }
            else {
                ans[y.second] = k/diff;
                times = k/diff;
                k = k - (diff*(k/diff));
            }
            
            pval = y.first;
            prev = y.second;
        }
        
    }

    for(int i=n-1;i>=0;i--) {
        if(ans[i]>0) continue;
        else if(ans[i]==0 && i!=n-1) {
            ans[i] += ans[i+1];
        }
    }

    for(auto y: ans) cout<<y<<" ";
    cout<<endl;
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