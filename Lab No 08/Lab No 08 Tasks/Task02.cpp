#include <iostream>   
using namespace std;  

int main() {

    // 2D array (matrix) declare aur initialize karna
    int matrix[3][3] = {
        {2, 4, 6},
        {1, 3, 5},
        {7, 8, 9}
    };

    int totalSum = 0; // total sum store karne ke liye

    cout << "Row-wise Sum:" << endl; // heading print

    // row-wise sum nikalna
    for (int i = 0; i < 3; i++) {

        int rowSum = 0; // har row ka sum

        for (int j = 0; j < 3; j++) {
            rowSum += matrix[i][j]; // row ke elements add karna
        }

        cout << "Row " << i + 1 << " sum = " << rowSum << endl; // row sum print
        totalSum += rowSum; // total sum me add karna
    }

    cout << endl;

    cout << "Column-wise Sum:" << endl; // heading print

    // column-wise sum nikalna
    for (int j = 0; j < 3; j++) {

        int colSum = 0; // har column ka sum

        for (int i = 0; i < 3; i++) {
            colSum += matrix[i][j]; // column ke elements add karna
        }

        cout << "Column " << j + 1 << " sum = " << colSum << endl; // column sum print
    }

    cout << endl;

    cout << "Total sum of all elements = " << totalSum << endl; // final total print

    return 0; // program end
}