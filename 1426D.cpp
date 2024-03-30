#include <iostream>
#include <algorithm>
using namespace std;

typedef long long ll;

void solve() {
    int t;
    cin >> t;
    while (t--) {
        ll n, m;
        cin >> n >> m;

        ll a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        sort(a, a + n);
        
        ll result = 0;
        for (int i = 0; i < n - 1; i++) {
            result += (a[n - 1] - a[i]);
        }

        ll maxElement = a[n - 1];
        ll target = a[n - 1];

        for (int i = n - 2; i >= 0; i--) {
            if (a[i] < target) {
                target = maxElement;
                result -= (maxElement - a[i]);
            }

            if (i % m == 0) {
                target--;
            }
        }

        cout << result << endl;
    }
}

int main() {
    solve();
    return 0;
}
