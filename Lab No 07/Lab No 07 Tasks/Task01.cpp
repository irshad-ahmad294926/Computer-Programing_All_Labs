#include <iostream>   
using namespace std;  

int main () {

    // Array declare aur initialize karna
    // 'numbers' ek integer array hai jiska size 5 hai
    // aur is mein 5 values store hain
    int numbers[5] = {10, 20, 30, 40, 50};

    // Heading print karna
    cout << "Array elements are: " << endl;

    // Loop use karke array ke tamam elements print karna
    // Loop index 0 se start hota hai aur 4 tak chalta hai (total 5 elements)
    for (int i = 0; i < 5; i++) {

        // numbers[i] se har element access hota hai
        cout << numbers[i] << endl;
    }

    return 0;
}