#include <iostream>
using namespace std;

int main()
{

    int originalNumber, reversedNumber = 0, currentDigit;

    cout << "Enter an integer: ";
    cin >> originalNumber;

    int numberToReverse = originalNumber;

    while (numberToReverse != 0)
    {
        currentDigit = numberToReverse % 10;
        reversedNumber = reversedNumber * 10 + currentDigit;
        numberToReverse /= 10;
    }

    cout << "Reversed Number = " << reversedNumber;

    return 0;
}