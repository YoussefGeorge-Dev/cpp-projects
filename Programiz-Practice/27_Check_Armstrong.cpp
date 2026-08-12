#include <cmath>
#include <iostream>

using namespace std;

int main()
{
    int inputNumber, workingNumber, currentDigit;
    int digitCount = 0;
    int sumOfPowers = 0;
    int digitPowerResult;

    cout << "Enter an integer: ";
    cin >> inputNumber;

    workingNumber = inputNumber;

    // Count the total number of digits
    while (workingNumber != 0)
    {
        workingNumber /= 10;
        ++digitCount;
    }

    workingNumber = inputNumber;

    while (workingNumber != 0)
    {
        currentDigit = workingNumber % 10;

        digitPowerResult = round(pow(currentDigit, digitCount));
        sumOfPowers += digitPowerResult;
        workingNumber /= 10;
    }

    if (sumOfPowers == inputNumber)
        cout << inputNumber << " is an Armstrong number.";
    else
        cout << inputNumber << " is not an Armstrong number.";

    return 0;
}