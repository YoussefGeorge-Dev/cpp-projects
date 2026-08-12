#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int lowerBound, upperBound;

    cout << "Enter first number: ";
    cin >> lowerBound;

    cout << "Enter second number: ";
    cin >> upperBound;

    if (lowerBound > upperBound)
    {
        lowerBound = lowerBound + upperBound;
        upperBound = lowerBound - upperBound;
        lowerBound = lowerBound - upperBound;
    }

    cout << "Armstrong numbers between " << lowerBound << " and " << upperBound << " are: " << endl;

    for (int currentCandidate = lowerBound; currentCandidate <= upperBound; currentCandidate++)
    {
        int digitCount = 0;
        int workingNumber = currentCandidate;

        while (workingNumber > 0)
        {
            ++digitCount;
            workingNumber /= 10;
        }

        int sumOfPowers = 0;
        workingNumber = currentCandidate;

        while (workingNumber > 0)
        {
            int currentDigit = workingNumber % 10;
            sumOfPowers += round(pow(currentDigit, digitCount));
            workingNumber /= 10;
        }

        // If sum matches the original number, it is an Armstrong number
        if (sumOfPowers == currentCandidate)
        {
            cout << currentCandidate << ", ";
        }
    }

    return 0;
}