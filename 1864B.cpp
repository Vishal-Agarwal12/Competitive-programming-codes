#include <bits/stdc++.h>
#define int long long
using namespace std;

bool isPrime(int num)
{
    if (num <= 1)
        return false;
    if (num <= 3)
        return true;

    int range = sqrt(num);
    if (num % 2 == 0 || num % 3 == 0)
        return false;

    for (int i = 5; i <= range; i += 6)
        if (num % i == 0 || num % (i + 2) == 0)
            return false;

    return true;
}

int smallestDivisor(int n)
{
    if (n % 2 == 0)
        return 2;

    for (int i = 3; i * i <= n; i += 2)
    {
        if (n % i == 0)
            return i;
    }

    return n;
}

int32_t main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, count = 0;
        vector<int> v;
        cin >> n;
        int a = n;
        while (n != 1)
        {
            if (isPrime(n))
            {
                n--;
                count++;
                v.push_back(n);
            }
            else
            {
                int s = smallestDivisor(n);
                n -= n / s;
                count++;
                v.push_back(n);
            }
        }
        cout << count + 1 << endl;
        cout << a << " ";
        for (auto itr : v)
            cout << itr << " ";
        cout << endl;
    }

    return 0;
}