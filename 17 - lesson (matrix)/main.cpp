#include <iostream>

using namespace std;

int main() {
/*         matrix 3x4
            Columns
          0   1   2   3 
        |---------------|
      0 | 0 | 0 | 0 | 0 |
        |---------------|
Lines 1 | 1 | 1 | 1 | 1 |
        |---------------|
      2 | 2 | 2 | 2 | 2 |
        |---------------|
*/

    int matrix [3][4]; // 3x4 matrix to store integer values

    int l, c; // variables to represent the current line and column

    // Initializing the matrix with specific values
    matrix[0][0] = 0;
    matrix[0][1] = 0;
    matrix[0][2] = 0;
    matrix[0][3] = 0;

    matrix[1][0] = 1;
    matrix[1][1] = 1;
    matrix[1][2] = 1;
    matrix[1][3] = 1;

    matrix[2][0] = 2;
    matrix[2][1] = 2;
    matrix[2][2] = 2;
    matrix[2][3] = 2;

    // Printing the matrix
    for(l=0; l < 3; l++) {
        for(c=0; c < 4; c++) {
            cout << matrix[l][c] << " ";
        }
        cout << endl;
    }

    // Reading the matrix from the user
    for(l=0; l < 3; l++) {
        for(c=0; c < 4; c++) {
            cout << "matrix[" << l << "][" << c << "] = ";
            cin >> matrix[l][c];
        }
        cout << endl;
    }

    // Printing the matrix
    for(l=0; l < 3; l++) {
        for(c=0; c < 4; c++) {
            cout << matrix[l][c] << " ";
        }
        cout << endl;
    }

    return 0;
}