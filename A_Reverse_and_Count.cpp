#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> nums(n);

    for (int i = 0; i < n; i++)
    {
        nums[i] = i + 1;
    }

    for (int i = 1; i < k; i++)
    {
        next_permutation(nums.begin(), nums.end());
    }

    for (int i = 0; i < n; i++)
    {
        cout << nums[i] << " ";
    }
    cout << endl;

    return 0;
}
