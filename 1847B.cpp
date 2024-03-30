#include <iostream>
#include <vector>
#include <algorithm>
#define ll long long
using namespace std;

ll findMaxGroups(vector<ll> &strengths)
{
    ll minStrength = *min_element(strengths.begin(), strengths.end());
    ll count = 0;
    for (ll strength : strengths)
    {
        if (strength == minStrength)
            count++;
    }
    return count;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<ll> strengths(n);
        for (int i = 0; i < n; i++)
            cin >> strengths[i];

        ll maxGroups = findMaxGroups(strengths);
        cout << maxGroups << endl;
    }

    return 0;
}
