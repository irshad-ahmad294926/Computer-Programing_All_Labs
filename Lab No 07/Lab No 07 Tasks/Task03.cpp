#include <iostream> 
using namespace std;  

int main() {

    int source[5] = {5, 10, 15, 20, 25}; // original array (pehla data)
    int destination[5]; // empty array (copy store karne ke liye)

    for (int i = 0; i < 5; i++) { // loop for copying elements
        destination[i] = source[i]; // source se destination me copy karna
    }

    cout << "Source Array:" << endl; // heading print karna

    for (int i = 0; i < 5; i++) { // source array print loop
        cout << source[i] << " "; // elements display karna
    }

    cout << endl; // next line

    cout << "Destination Array:" << endl; // heading print karna

    for (int i = 0; i < 5; i++) { // destination array print loop
        cout << destination[i] << " "; // copied elements print
    }

    cout << endl; // next line

    return 0; 
}