#include <iostream>
#include <queue>
#define ll long long
using namespace std;

bool myComp(const pair<int, int> &a, const pair<int, int> &b)
{
    if (a.first == b.first)
    {
        return a.second > b.second;
    }
    return a.first < b.first;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;

        priority_queue<pair<int, int>, vector<pair<int, int>>, bool (*)(const pair<int, int> &, const pair<int, int> &)> p(myComp);

        for (int i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            x = x%k;
            if(x==0) x=k;
            p.push({x, i + 1});
        }

        ll temp = n;
        while (temp)
        {
            pair<ll, ll> pi = p.top();
            ll num = pi.first - k;
            p.pop();

            if (num <= 0)
            {
                cout << pi.second << " ";
                temp--;
            }
            else
            {
                p.push({num, pi.second});
            }
        }
        cout << endl;
    }

    return 0;
}
