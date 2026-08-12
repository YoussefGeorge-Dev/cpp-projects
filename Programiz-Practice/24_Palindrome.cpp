#include <iostream>
using namespace std;

int main()
{
    int originalNumber, workingNumber, currentDigit, reversedNumber = 0;

    cout << "Enter a positive number: ";
    cin >> originalNumber;

    workingNumber = originalNumber;

    do
    {
        currentDigit = workingNumber % 10;
        reversedNumber = (reversedNumber * 10) + currentDigit;
        workingNumber = workingNumber / 10;
    } while (workingNumber != 0);

    cout << " The reverse of the number is: " << reversedNumber << endl;

    if (originalNumber == reversedNumber && originalNumber > 0)
        cout << " The number is a palindrome.";
    else
        cout << " The number is not a palindrome.";

    return 0;
}