#include <iostream>
#include <vector>
using namespace std;

int lis(int A[], int N) {
    int cnt = 1;
    int lst = A[0];
    for (int i = 1; i < N; i++) {
        if (A[i] > lst) {
            cnt++;
            lst = A[i];
        }
    }
    return cnt;
}

vector<int> findPerm(int N, int X) {
    vector<int> res;
    if (X >= N) {
        res.push_back(-1);
        return res;
    }

    for (int i = 1; i <= N; i++) {
        res.push_back(i);
    }

    for (int i = N - 1; i >= 0 && X > 0; i--, X--) {
        swap(res[i], res[i - 1]);
    }

    return res;
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N, X;
        cin >> N >> X;

        vector<int> perm = findPerm(N, X);

        for (int i = 0; i < N; i++) {
            cout << perm[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
