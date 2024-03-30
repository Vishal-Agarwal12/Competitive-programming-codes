#include <bits/stdc++.h>
using namespace std;

vector<int> f(int n, const vector<int>& a) {
    vector<int> b(n);
    vector<bool> used(n + 1, false);
    for (int i = 0; i < n; ++i) {
        int maxVal = *max_element(a.begin(), a.end());
        b[i] = maxVal;
        used[maxVal] = true;
        a.erase(find(a.begin(), a.end(), maxVal));
    }
    for (int i = 0, j = 1; i < n; ++i) {
        if (b[i] == 0) {
            while (used[j]) {
                ++j;
            }
            b[i] = j;
            used[j] = true;
        }
    }
    return b;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        vector<int> result = f(n, a);
        for (int i = 0; i < n; ++i) {
            cout << result[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
