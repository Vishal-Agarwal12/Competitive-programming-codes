#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll N;
    cin >> N;
    string S, T;
    cin >> S >> T;
    ll cntA = 0, cntB = 0;
    for (int i = 0; i < N; i++)
    {
        if (S[i] == 'a')
            cntA++;
        else
            cntB++;
        if (T[i] == 'a')
            cntA++;
        else
            cntB++;
    }
    if (cntA % 2 || cntB % 2)
    {
        cout << -1 << endl;
        return;
    }
    vector<ll> pos1, pos2;
    for (int i = 0; i < N; i++)
    {
        if (S[i] == T[i])
            continue;
        if (S[i] == 'a')
            pos1.push_back(i);
        else
            pos2.push_back(i);
    }
    vector<pair<ll, ll>> ans;
    for (ll i = 0; i + 1 < (ll)pos1.size(); i += 2)
    {
        ans.push_back({pos1[i], pos1[i + 1]});
    }
    for (ll i = 0; i + 1 < (ll)pos2.size(); i += 2)
    {
        ans.push_back({pos2[i], pos2[i + 1]});
    }
    if (pos1.size() % 2)
    {
        ans.push_back({pos2.back(), pos2.back()});
        ans.push_back({pos1.back(), pos2.back()});
    }
    cout << ans.size() << endl;
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i].first + 1 << " " << ans[i].second + 1 << endl;
    }
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
