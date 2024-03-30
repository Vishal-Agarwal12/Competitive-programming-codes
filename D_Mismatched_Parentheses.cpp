#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n;
    string s;
    cin >> n >> s;

    stack<char> st;
    int ok = 0;

    for (int i = 0; i < n; i++)
    {
        if (s[i] == '(')
        {
            ok++;
            st.push(s[i]);
        }
        else if (s[i] == ')' && ok > 0)
        {
            ok--;
            st.push(s[i]);
            while (st.top() != '(')
            {
                st.pop();
            }
            st.pop();
        }
        else
            st.push(s[i]);
    }

    string ans = "";
    while (!st.empty())
    {
        ans += st.top();
        st.pop();
    }

    reverse(ans.begin(), ans.end());

    cout << ans << endl;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
