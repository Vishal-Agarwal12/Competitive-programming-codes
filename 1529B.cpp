#include <bits/stdc++.h>
using namespace std;

char nl = '\n';
char sp = ' ';
using ll = long long;

void solve()
{
    ll n;
    cin>>n;

    ll a[n];
    for(int i=0;i<n;i++) cin>>a[i];

    vector<ll> neg;
    for(int i=0;i<n;i++) {
        if(a[i]<=0) neg.push_back(a[i]);
    }
    sort(neg.begin(), neg.end());
    if(neg.size()==0) {
        cout<<1<<endl;
        return;
    }
    ll mm=LLONG_MAX;
    for(int i=0;i<neg.size()-1;i++) {
        mm = min(mm, abs(neg[i+1] - neg[i]));
    }

    for(int i=0;i<n;i++) {
        if(a[i] > 0 && a[i] <= mm) {
            neg.push_back(a[i]);
            break;
        }
    }
    cout<<neg.size()<<endl;
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