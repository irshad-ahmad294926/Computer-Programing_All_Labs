#include <iostream>
using namespace std;

int main()
{
    int num, i = 1;
    int sum = 0;

    cout << "Enter a positive integer: ";
    cin >> num;

    while (i <= num)
    {
        sum = sum + i;
        i++;
    }

    cout << "The sum of numbers from 1 to " << num << " is: " << sum << endl;

    return 0;
}