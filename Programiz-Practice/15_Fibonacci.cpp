#include <iostream>
using namespace std;

int main()
{
    int numberOfTerms;
    int previousTerm = 0;
    int currentTerm = 1;
    int nextTerm = 0;

    cout << "Enter the number of terms: ";
    cin >> numberOfTerms;

    cout << "Fibonacci Series: ";

    for (int i = 1; i <= numberOfTerms; ++i)
    {
        // Prints the first two terms.
        if (i == 1)
        {
            cout << previousTerm << ", ";
            continue;
        }
        if (i == 2)
        {
            cout << currentTerm << ", ";
            continue;
        }

        nextTerm = previousTerm + currentTerm;
        previousTerm = currentTerm;
        currentTerm = nextTerm;

        cout << nextTerm << ", ";
    }
    return 0;
}