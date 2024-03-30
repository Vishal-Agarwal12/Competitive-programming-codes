#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll x, n, num;
    cin >> x >> n;

    set<ll> pos;
    multiset<ll> len;
    pos.insert(0);
    pos.insert(x);
    len.insert(x - 0);

    for (int i = 0; i < n; i++)
    {
        cin >> num;
        pos.insert(num);
        auto it = pos.find(num);
        int prevElement = *prev(it);
        int nextElement = *next(it);
        len.erase(len.find(nextElement - prevElement));
        len.insert(num - prevElement);
        len.insert(nextElement - num);

        cout << *len.rbegin() << " ";
    }
    return;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
