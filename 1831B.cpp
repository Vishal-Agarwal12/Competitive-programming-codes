#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
signed main()
{
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int count = 1, cnt = 1, maxi = 0;
        vector<int> vec1(n), vec2(n);
        for (int i = 0; i < n; i++)
        {
            cin >> vec1[i];
        }
        for (int j = 0; j < n; j++)
        {
            cin >> vec2[j];
        }
        for (int y = 0; y < n; y++)
        {
            maxi = max(maxi, vec1[y]);
        }
        for (int z = 0; z < n; z++)
        {
            maxi = max(maxi, vec2[z]);
        }
        vector<int> vec3(maxi + 1), vec4(maxi + 1), vec5(maxi + 1);
        for (int p = 0; p < n; p++)
        {
            vec3[vec1[p]] = 1;
        }
        for (int q = 0; q < n; q++)
        {
            vec4[vec2[q]] = 1;
        }
        for (int k = 1; k < n; k++)
        {
            if (vec1[k] == vec1[k - 1])
            {
                count++;
                vec3[vec1[k]] = count;
            }
            else
            {
                count = 1;
            }
        }
        for (int l = 1; l < n; l++)
        {
            if (vec2[l] == vec2[l - 1])
            {
                cnt++;
                vec4[vec2[l]] = cnt;
            }
            else
            {
                cnt = 1;
            }
        }
        for (int m = 0; m < maxi + 1; m++)
        {
            vec5[m] = vec3[m] + vec4[m];
        }
        sort(vec5.begin(), vec5.end());
        cout << vec5[maxi + 1 - 1] << endl;
    }
}