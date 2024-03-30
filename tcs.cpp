#include <iostream>
#include <sstream>
#include <vector>
#include <algorithm>
#define ll long long

using namespace std;

void solve()
{

    std::string weightsInput;
    std::getline(std::cin, weightsInput);

    std::istringstream iss(weightsInput);
    std::vector<int> arr;

    int num;
    while (iss >> num) {
        arr.push_back(num);
    }
    int k, n = arr.size();
    cin>>k;

    // int n = arr.size();
    sort(arr.begin(), arr.end());

    int l = 0, r = n - 1;
    int ans = 0;

    while (l < r) {
        if (arr[l] + arr[r] <= k) {
            arr[l] = -1;
            arr[r] = -1;
            l++;
            r--;
            ans++;
        } else {
            r--;
        }
    }

    for (int i = 0; i < n; i++) {
        if (arr[i] != -1)
            ans++;
    }

    cout << ans << endl;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
