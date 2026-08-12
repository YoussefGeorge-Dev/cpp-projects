#include <iostream>
using namespace std;

int main()
{
    int targetNumber;

    cout << "Enter a positive integer: ";
    cin >> targetNumber;

    cout << "Factors of " << targetNumber << " are: ";
    for (int factorCandidate = 1; factorCandidate <= targetNumber; ++factorCandidate)
    {
        if (targetNumber % factorCandidate == 0)
        {
            cout << factorCandidate << " ";
        }
    }

    return 0;
}