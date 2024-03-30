#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

const int MOD = 1000000007;

long long sumOfGoodness(vector<int> &A)
{
    int N = A.size();
    vector<pair<int, int>> sorted(N);
    for (int i = 0; i < N; i++)
    {
        sorted[i] = make_pair(A[i], i + 1);
    }
    sort(sorted.begin(), sorted.end());

    long long sum = 0;
    for (int i = 0; i < N; i++)
    {
        sum += abs(sorted[i].second - (i + 1));
        sum %= MOD;
    }

    return sum;
}

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int N;
        cin >> N;

        vector<int> A(N);
        for (int i = 0; i < N; i++)
        {
            cin >> A[i];
        }

        long long result = sumOfGoodness(A);
        cout << result << endl;
    }

    return 0;
}
