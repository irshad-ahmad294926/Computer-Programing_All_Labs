#include <iostream>   
using namespace std;  

int main () {

    // 2D array (matrix) declare aur initialize karna
    int matrix[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    cout << "Matrix elements is:" << endl; // heading print karna

    // outer loop rows ke liye
    for (int i = 0; i < 3; i++) {

        // inner loop columns ke liye
        for (int j = 0; j < 3; j++) {

            // matrix ka element print karna
            cout << matrix[i][j] << " ";
        }

        cout << endl; // har row ke baad new line
    }

    return 0; 
}