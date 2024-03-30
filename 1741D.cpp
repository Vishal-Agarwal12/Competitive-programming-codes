#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
    ll n; cin>>n;

    ll a[n];
    for(int i=0;i<n;i++) {
        cin>>a[i];
    }

    ll c=0;
    for (int k = 1; k < n; k *= 2)
    {
        for (int i = 0; i < n; i += (k * 2))
        {
            if (abs(a[i] - a[i + k]) != k)
            {
                cout << -1 << "\n";
                return;
            }
            if (a[i] > a[i + k])
            {
                swap(a[i], a[i + k]);
                ++c;
            }
        }
    }
    cout << c << '\n';
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

