#include <iostream>
using namespace std;

int main()
{
    int firstNumber, secondNumber, lcmCandidate;

    cout << "Enter two numbers: ";
    cin >> firstNumber >> secondNumber;

    lcmCandidate = (firstNumber > secondNumber) ? firstNumber : secondNumber;

    do
    {
        if (lcmCandidate % firstNumber == 0 && lcmCandidate % secondNumber == 0)
        {
            cout << "LCM = " << lcmCandidate;
            break;
        }
        else
        {
            ++lcmCandidate;
        }
    } while (true);

    return 0;
}