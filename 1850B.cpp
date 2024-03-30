#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

unordered_set<int> calculateDivisors(int num)
{
    unordered_set<int> divisors;
    for (int i = 1; i * i <= num; i++)
    {
        if (num % i == 0)
        {
            divisors.insert(i);
            divisors.insert(num / i);
        }
    }
    return divisors;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, num;
    cin >> n >> num;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    unordered_set<int> divisors = calculateDivisors(num);

    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (divisors.count(arr[i]) > 0)
        {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}
