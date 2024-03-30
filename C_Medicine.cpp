#include <iostream>
#include <vector>
#include <algorithm>

#define ll long long

using namespace std;

ll binarySearch(const vector<ll> &arr, int target)
{
    int low = 0;
    int high = arr.size() - 1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (arr[mid] == target)
        {
            return mid;
        }
        else if (arr[mid] < target)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    return -1;
}

void solve()
{
    ll n, k;
    cin >> n >> k;

    vector<pair<ll, ll>> v;
    for (int i = 0; i < n; i++)
    {
        ll x, y;
        cin >> x >> y;
        v.push_back({x, y});
    }

    sort(v.begin(), v.end());

    vector<ll> a;
    for (int i = 0; i < n; i++)
    {
        a.push_back(v[i].second);
    }

    sort(a.begin(), a.end());
    vector<ll> pre;
    pre.resize(n);
    pre[0] = a[0];
    for (int i = 1; i < n; i++)
    {
        pre[i] = a[i] + pre[i - 1];
    }

    for (int i = 0; i < n; i++)
    {
        ll z = binarySearch(a, v[i].second);
        if (pre[z] <= k)
        {
            cout << v[i - 1].first + 1 << endl;
            return;
        }
    }
    cout << n << endl;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
