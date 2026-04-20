#include <iostream>
using namespace std;

int main()
{
    int num = 1;

    do
    {
        cout << num << endl;   // print number on a new line
        num++;                 // increase number
    }
    while (num <= 10);         // condition

    return 0;
}