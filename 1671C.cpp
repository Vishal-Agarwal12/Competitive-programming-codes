#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
    int n, x;
    cin >> n >> x;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    ll s = 0;
    ll ans = 0;
    for (int i = 0; i < n; i++)
    {
        s += a[i];
        if (s <= x)
        {
            ans += (x - s) / (i + 1) + 1;
        }
    }
    cout << ans << '\n';
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

