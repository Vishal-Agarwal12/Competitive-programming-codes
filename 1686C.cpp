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

    if (n % 2 == 1)
    {
        cout << "NO" << endl;
        return;
    }

    sort(a, a + n);

    ll fg=0,j=0;
    for(int i=n/2;i<n-1;i++) {
        if(a[i]>a[j] && a[i]>a[j+1]) {
            fg++;
            j++;
        }
    }
    if(a[n-1]>a[0] && a[n-1]>a[n/2-1]) fg++;

    if(fg!=n/2) {
        cout<<"NO"<<endl;
        return;
    }

    cout << "YES" << endl;
    for (int i = 0; i < n / 2; i++)
    {
        cout << a[i] << " " << a[i + n / 2] << " ";
    }
    cout << endl;
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
