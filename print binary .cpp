#include <iostream>
#include <vector>

using namespace std;

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

        vector<int> C(N);
        for (int i = 0; i < N; i++) {
            C[i] = (A[i] == 0) ? 1 : 0;
        }

        for (int i = 0; i < N; i++) {
            cout << C[i] << " ";
        }
        cout << endl;
    }

    return 0;
}