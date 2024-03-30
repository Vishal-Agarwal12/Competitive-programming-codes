#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n;
    cin >> n;

    ll a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    ll c = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > 0)
        {
            c++;
            break;
        }
    }
    if (c==0)
    {
        cout<<n-1<<endl;
        for(int i=n-1;i>0;i--) {
            cout<<i<<" "<<i+1<<endl;
        }
        return;
    }

    vector<pair<ll,ll>> v;
    ll id = 0;
    for(int i=0;i<n;i++) {
        if(a[i]>0) {
            id = i;
            while(a[i]<20) {
                a[i]+=a[i];
                v.push_back({i+1,i+1});
            }
            break;
        }
    }

    for(int i=0;i<n;i++) {
        if(a[i]<0) {
            a[i]+=a[id];
            v.push_back({i+1,id+1});
        }
    }

    for(int i=1;i<n;i++) {
        v.push_back({i+1,i});
    }
    cout<<v.size()<<endl;
    for(int i=0;i<v.size();i++) cout<<v[i].first<<" "<<v[i].second<<endl;
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
