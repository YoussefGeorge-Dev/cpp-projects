#include <iostream>
using namespace std;

// * Question 1
// TODO Function that takes an amount in Egyptian Pounds (EGP) as input and returns the equivalent amount in US Dollars (USD) using a fixed exchange rate of 1 EGP = 45.4 USD.

/*
double convertToUSD(double amountInEGP) 
{
    const double exchangeRate = 45.4;
    return amountInEGP * exchangeRate;
}

int main() 
{
    double amountInEGP;

    cout << "Enter amount in Egyptian Pounds (EGP): ";
    cin >> amountInEGP;

    double amountInUSD = convertToUSD(amountInEGP);
    cout << "Equivalent amount in US Dollars (USD): " << amountInUSD << endl;

    return 0;
}
*/

// * Question 2
// TODO Function that asks user to enter their name and ID, then returns a formatted string containing both pieces of information.
/*
string getInput() 
{
    string name;
    cout << "Enter your name: ";
    cin >> name;

    string id;
    cout << "Enter your ID: ";
    cin >> id;

    string txt;
    txt = "Name: " + name + ", ID: " + id;
    return txt;
}

int main() 
{
    cout << getInput() << endl;
    return 0;
}
*/

// * Question 3a
// TODO Function that takes an integer as input and returns true if the number is even, and false if it is odd.
/*
void checkEvenOrOdd(int number) 
{
    if (number % 2 == 0) 
    {
        cout << number << " is even." << endl;
    } 
    else 
    {
        cout << number << " is odd." << endl;
    }
}

int main() 
{
    int number;
    cout << "Enter an integer: ";
    cin >> number;

    checkEvenOrOdd(number);

    return 0;
}

*/

// * Question 3b
// TODO Function that takes an integer as input and returns true if the number is even, and false if it is odd. (Using return statement)
/*
bool isEven(int number) 
{
    if(number % 2 == 0) 
    {
        return true;
    } 
    else 
    {
        return false;
    }
}

int main() 
{
    int number;
    cout << "Enter an integer: ";
    cin >> number;

    if (isEven(number)) 
    {
        cout << number << " is even." << endl;
    } 
    else 
    {
        cout << number << " is odd." << endl;
    }

    return 0;
}  
*/

// * Question 4
// TODO Function that takes an age in years as input and returns the equivalent age in days, assuming 1 year is equal to 365 days.
/*
void getAgeInDays(int ageInYears) 
{
    int ageInDays = ageInYears * 365;
    cout << "Your age in days is: " << ageInDays << endl;
}

int main() 
{
    int ageInYears;
    cout << "Enter your age in years: ";
    cin >> ageInYears;

    cout << "Your age in days is: ";
    getAgeInDays(ageInYears);

    return 0;
}
*/

// * Question 5

