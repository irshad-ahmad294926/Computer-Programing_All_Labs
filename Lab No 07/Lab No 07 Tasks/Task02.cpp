#include <iostream>   
using namespace std;  

int main() {

    char message[] = "Hello";      // character array (string) - yahan text store hai

    cout << "Characters in the message :" << endl;   // heading print karna

    for (int i = 0; message[i]; i++) {   // loop tab tak chalega jab tak '\0' na aa jaye
        cout << message[i] << endl;     // har character ko line by line print karna
    }

    return 0; 
}