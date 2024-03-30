#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
  int n, k;
  cin >> n >> k;
  string s;
  cin >> s;
  vector<char> dec(26);
  for (int i = 0; i < n; ++i)
  {
    while (s[i] > 'a')
    {
      if (!dec[s[i] - 'a'])
      {
        if (k == 0)
          break;
        --k;
        dec[s[i] - 'a'] = true;
      }
      s[i] -= 1;
    }
  }
  cout << s << endl;
}

signed main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;
  while (t--)
    solve();

  return 0;
}
