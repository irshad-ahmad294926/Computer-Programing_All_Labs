#include <iostream>   
using namespace std; 

int main() {

    // 4x4 matrix declare aur initialize karna
    int matrix[4][4] = {
        {12, 5, 9, 21},
        {8, 17, 3, 14},
        {6, 25, 11, 2},
        {19, 7, 10, 15}
    };

    // pehla element ko maximum assume karna
    int maxVal = matrix[0][0];

    // nested loop to check all elements
    for (int i = 0; i < 4; i++) {        // rows ke liye loop
        for (int j = 0; j < 4; j++) {    // columns ke liye loop

            // agar current element bara ho maxVal se
            if (matrix[i][j] > maxVal) {
                maxVal = matrix[i][j]; // new maximum store karna
            }
        }
    }

    // result display karna
    cout << "Maximum value in the array = " << maxVal << endl;

    return 0; // program end
}