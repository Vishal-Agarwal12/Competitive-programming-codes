#include <bits/stdc++.h>
using namespace std;

void f(int n) {
    int A = 1, B = 1, C = 1;

    while (A <= n) {
        B = (n - A) / A;
        C = n - A;
        
        if (C > 0 && (A*B*C)/__gcd(B,C) == n) {
            cout << A << " " << B << " " << C << endl;
            return;
        }
        A++;
        if(__gcd(A,B) > 0) A++;
        else if(__gcd(B,C) > 0) C++;
    }

    cout << "-1" << endl;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        f(n);
    }

    return 0;
}
