#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> B(n), A(n), C(n);
        long long P = 0, Q = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> B[i];
            A[i] = pow(2, i);   
            C[i] = A[i] * B[i]; 
        }
        long long sum = 0;
        unordered_map<long long, long long> mp; 
        mp[0] = 1;                              
        for (int i = 0; i < n; i++)
        {
            sum += C[i];
            if (sum > 0)
                P += mp[sum - 1];
            mp[sum]++;
        }
        sum = 0;
        mp.clear();
        mp[0] = 1; 
        for (int i = 0; i < n; i++)
        {
            sum += C[i];
            if (sum < 0)
                Q += mp[sum - 1];
            mp[sum]++;
        }
        cout << abs(P - Q) << endl; 
    }
    return 0;
}
