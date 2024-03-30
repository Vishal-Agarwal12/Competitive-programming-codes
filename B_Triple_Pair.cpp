#include <iostream>
#include <vector>

using namespace std;

const int MOD = 998244353;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int N;
        cin >> N;

        int ans = 0;
        for (int i = 1; i <= N; i++)
        {
            for (int j = i; i * j <= N; j++)
            {
                int k = N / (i * j);
                ans = (ans + k) % MOD;
            }
        }

        cout << ans << endl;
    }

    return 0;
}
