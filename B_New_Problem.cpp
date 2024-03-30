#include <bits/stdc++.h>
using namespace std;

signed main()
{
    int n, A[26] = {0}, B[26][26] = {0};
    string s[30];
    scanf("%d\n", &n);

    for (int i = 0; i < n; i++)
    {
        getline(cin, s[i]);
        int k = s[i].length();
        for (int j = 0; j < k - 1; j++)
        {
            A[s[i][j] - 'a']++;
            B[s[i][j] - 'a'][s[i][j + 1] - 'a']++;
        }
        A[s[i][k - 1] - 'a']++;
    }
    int i;
    for (i = 0; i < 26; i++)
    {

        if (A[i] == 0)
        {
            char ch = 'a' + i;
            cout << ch << endl;
            break;
        }
    }

    if (i == 26)
    {
        for (i = 0; i < 26; i++)
        {
            int j;
            for (j = 0; j < 26; j++)
            {
                if (B[i][j] == 0)
                {
                    char ch = 'a' + i, ch1 = 'a' + j;
                    cout << ch << ch1 << endl;
                    break;
                }
            }
            if (j < 26)
                break;
        }
    }
}
