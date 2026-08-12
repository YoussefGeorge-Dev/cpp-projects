#include <iostream>
using namespace std;

int main()
{
    int firstNumber, secondNumber, highestCommonFactor;

    cout << "Enter two numbers: ";
    cin >> firstNumber >> secondNumber;

    if (secondNumber > firstNumber)
    {
        int tempNumber = secondNumber;
        secondNumber = firstNumber;
        firstNumber = tempNumber;
    }

    for (int i = 1; i <= secondNumber; ++i)
    {
        if (firstNumber % i == 0 && secondNumber % i == 0)
        {
            highestCommonFactor = i;
        }
    }

    cout << "HCF = " << highestCommonFactor;

    return 0;
}