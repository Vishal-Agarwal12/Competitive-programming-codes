#include <bits/stdc++.h>
using namespace std;

const int MOD = 1000000007;

int fact(int n) {
    int res = 1;
    for (int i = 1; i <= n; ++i) {
        res = (res * i) % MOD;
    }
    return res;
}

int pow(int base, int exp) {
    int res = 1;
    while (exp > 0) {
        if (exp % 2 == 1) {
            res = (res * base) % MOD;
        }
        base = (base * base) % MOD;
        exp /= 2;
    }
    return res;
}

int f(int len, const string& str) {
    vector<int> freq(26, 0);

    for (char ch : str) {
        freq[ch - 'a']++;
    }

    int num = fact(len);
    int denom = 1;

    for (int f : freq) {
        denom = (denom * fact(f)) % MOD;
    }

    int vv = pow(denom, MOD - 2);

    int res = (num * vv) % MOD;
    return res;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        string s;
        cin >> s;

        int ans = f(n, s);
        cout << ans << endl;
    }

    return 0;
}
