#include <iostream>
#include <vector>

using namespace std;

int minOps(vector<int>& A) {
    int n = A.size();
    int ops = 0;

    for (int i = n - 1; i >= 0; i--) {
        if (A[i] == 0) continue;

        if (i > 0 && A[i - 1] > 0) {
            int decr = min(A[i], A[i - 1]);
            A[i] -= decr;
            A[i - 1] -= decr;
            ops += decr;
        } else {
            ops += A[i];
            A[i] = 0;
        }
    }

    return ops;
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        vector<int> A(N);
        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }

        int result = minOps(A);
        cout << result << endl;
    }

    return 0;
}
