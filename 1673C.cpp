#include <bits/stdc++.h>
#define ll long long
using namespace std;

vector<int> pal;
bool isPalindrome(int num)
{
    string str = to_string(num);
    int left = 0;
    int right = str.length() - 1;

    while (left < right)
    {
        if (str[left] != str[right])
        {
            return false;
        }
        left++;
        right--;
    }

    return true;
}

void findPalindromes(int n)
{
    for (int i = 1; i <= n; i++)
    {
        if (isPalindrome(i))
        {
            pal.push_back(i);
        }
    }

    cout << endl;
}

void solve() {
    
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin>>t;
    while(t--) 
        solve();

    return 0;
}

