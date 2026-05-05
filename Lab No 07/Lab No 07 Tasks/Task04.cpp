#include <iostream>   
using namespace std;  

int main() {

    int numbers[5];             // array declare (5 numbers store karne ke liye)
    int sum = 0;                // sum ko 0 se start karna

    cout << "Enter 5 numbers:" << endl;      // user se input lene ka message

    for (int i = 0; i < 5; i++) {            // loop for input
        cin >> numbers[i];                  // user se values lena
    }

    for (int i = 0; i < 5; i++) {          // loop for sum calculation
        sum = sum + numbers[i];              // total sum add karna
    }

    cout << "Sum of array elements = " << sum << endl;    // result print

    return 0;
}