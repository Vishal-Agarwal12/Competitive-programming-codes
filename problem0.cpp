#include <iostream>

using namespace std;

int minimizeMoves(int A, int B, int n) {
    int moves = 0;
    
    // Choose the operation to minimize moves
    for (int i = 1; i <= n; ++i) {
        if (i % 2 == 1) {
            // Odd move
            if (A > B) {
                B += i;
            } else {
                A += i;
            }
        } else {
            // Even move
            if (A > B) {
                A -= i;
            } else {
                B -= i;
            }
        }
        
        ++moves;
        
        // Check if A and B are equal
        if (A == B) {
            break;
        }
    }
    
    return moves;
}

int main() {
    int A, B, n;
    cout << "Enter two integers A and B: ";
    cin >> A >> B;
    cout << "Enter the maximum number of moves: ";
    cin >> n;

    int moves = minimizeMoves(A, B, n);

    if (A == B) {
        cout << "A and B are equal after " << moves << " moves." << endl;
    } else {
        cout << "A and B are not equal after " << n << " moves." << endl;
    }

    return 0;
}
