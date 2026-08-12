#include <iostream>
using namespace std;

int main()
{
    int numberToCheck;
    bool isPrime = true;

    cout << "Enter a positive integer: ";
    cin >> numberToCheck;

    if (numberToCheck == 0 || numberToCheck == 1)
    {
        isPrime = false;
    }

    for (int divisor = 2; divisor <= numberToCheck / 2; ++divisor)
    {
        if (numberToCheck % divisor == 0)
        {
            isPrime = false;
            break;
        }
    }

    if (isPrime)
        cout << numberToCheck << " is a prime number";
    else
        cout << numberToCheck << " is not a prime number";

    return 0;
}