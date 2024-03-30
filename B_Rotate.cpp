#include <iostream>
#include <vector>

using namespace std;

void shiftOuterSquares(vector<vector<int>> &matrix)
{
    int n = matrix.size();

    for (int layer = 0; layer < n / 2; layer++)
    {
        int first = layer;
        int last = n - layer - 1;
        int temp = matrix[first][last];

        // Shift top row to the right
        for (int i = last; i > first; i--)
        {
            matrix[first][i] = matrix[first][i - 1];
        }

        // Shift right column downward
        for (int i = first; i < last; i++)
        {
            matrix[i][last] = matrix[i + 1][last];
        }

        // Shift bottom row to the left
        for (int i = last; i > first; i--)
        {
            matrix[last][i] = matrix[last][i - 1];
        }

        // Shift left column upward
        for (int i = first; i < last; i++)
        {
            matrix[i][first] = matrix[i + 1][first];
        }

        matrix[first + 1][first] = temp; // Place the stored element in the shifted position
    }
}

int main()
{
    int n;
    cout << "Enter the size of the matrix (n x n): ";
    cin >> n;

    vector<vector<int>> matrix(n, vector<int>(n));

    cout << "Enter the matrix elements:\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> matrix[i][j];
        }
    }

    shiftOuterSquares(matrix);

    cout << "Matrix after shifting the outer squares:\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
