#include <bits/stdc++.h>
using namespace std;



bool isPrime(int n) {
    if (n <= 1) {
        return false;
    }
    if (n <= 3) {
        return true;
    }
    if (n % 2 == 0 || n % 3 == 0) {
        return false;
    }
    int sqrtN = sqrt(n);
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) {
            return false;
        }
    }
    
    return true;
}

void solve()
{
    int n;
    cin>>n;

    int temp = -1;
    for(int i=3;i<=n;i++) {
        if(isPrime(i-1) && isPrime(abs(n-(i-1)))) {
            temp = i;
            break;
        }
    }

    if(temp == -1) {
        cout<<-1<<endl;
        return;
    }
    vector<int> ans;
    int tmp = temp;

    while(temp<=n) {
        ans.push_back(temp);
        temp++;
    }

    for(int i=1;i<tmp;i++) {
        ans.push_back(i);
    }
    for(int i=0;i<n;i++) {
        if(abs(ans[i]-(i+1)) == false) {
            cout<<-1<<endl;
            return;
        }
    }

    for(int i=0;i<n;i++) {
        cout<<ans[i]<<" ";
    }
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