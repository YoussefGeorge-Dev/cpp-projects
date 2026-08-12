#include <iostream>
using namespace std;

int main()
{

    char selectedOperator;
    float firstNumber, secondNumber;

    cout << "Enter operator (+, -, *, /): ";
    cin >> selectedOperator;

    cout << "Enter two operands: ";
    cin >> firstNumber >> secondNumber;

    switch (selectedOperator)
    {

    case '+':
        cout << firstNumber << " + " << secondNumber << " = " << firstNumber + secondNumber;
        break;

    case '-':
        cout << firstNumber << " - " << secondNumber << " = " << firstNumber - secondNumber;
        break;

    case '*':
        cout << firstNumber << " * " << secondNumber << " = " << firstNumber * secondNumber;
        break;

    case '/':
        if (secondNumber != 0)
        {
            cout << firstNumber << " / " << secondNumber << " = " << firstNumber / secondNumber;
        }
        else
        {
            cout << "Error! Division by zero is undefined.";
        }
        break;

    default:
        cout << "Error! Invalid operator entered.";
        break;
    }

    return 0;
}