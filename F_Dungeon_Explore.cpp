#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double

int main()
{
    int N, M;
    cin >> N >> M;
    vector<bool> visited(N + 1, false);
    visited[1] = true;
    stack<int> stk;
    stk.push(1);
    while (true)
    {
        int k;
        cin >> k;
        vector<int> res(k);
        for (int i = 0; i < k; i++)
            cin >> res[i];
        int ans = -1;
        for (int n : res)
        {
            if (!visited[n])
            {
                ans = n;
                break;
            }
        }
        if (ans == -1)
        {
            stk.pop();
            ans = stk.top();
        }
        else
        {
            stk.push(ans);
            visited[ans] = true;
        }
        cout << ans << endl;
        if (ans == N)
            break;
    }
    string s;
    cin >> s;
    assert(s == "OK");

    return 0;
}