#include <iostream>
using namespace std;

int main()
{
    int exponentValue;
    float baseNumber;
    float calculationResult = 1.0f;

    cout << "Enter base and exponent respectively:  ";
    cin >> baseNumber >> exponentValue;

    cout << baseNumber << "^" << exponentValue << " = ";


    int remainingPower = exponentValue;

    while (remainingPower != 0)
    {
        calculationResult *= baseNumber;
        --remainingPower;
    }

    cout << calculationResult;

    return 0;
}