#include <iostream>
using namespace std;

int main() {
    // Outer loop for rows
    for (int i = 1; i <= 10; i++) {
        
        // Inner loop for columns
        for (int j = 1; j <= 10; j++) {
            cout << i * j << "\t";  // print product with tab space
        }
        
        cout << endl;  // move to next row
    
    }

    return 0;      // end of program
}

