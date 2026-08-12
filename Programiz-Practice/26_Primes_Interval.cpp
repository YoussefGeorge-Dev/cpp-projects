#include <iostream>
using namespace std;

int main()
{
    int lowerBound, upperBound;
    bool isPrime = true;

    cout << "Enter two numbers (intervals): ";
    cin >> lowerBound >> upperBound;

    cout << "\nPrime numbers between " << lowerBound << " and " << upperBound << " are: " << endl;

    int currentCandidate = lowerBound;

    while (currentCandidate < upperBound)
    {
        isPrime = true;

        if (currentCandidate == 0 || currentCandidate == 1)
        {
            isPrime = false;
        }

        for (int divisor = 2; divisor <= currentCandidate / 2; ++divisor)
        {
            if (currentCandidate % divisor == 0)
            {
                isPrime = false;
                break;
            }
        }

        if (isPrime)
            cout << currentCandidate << ", ";

        ++currentCandidate;
    }

    return 0;
}