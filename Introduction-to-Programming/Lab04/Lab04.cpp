#include <iostream>
#include <string>
using namespace std;

// * Question 1
// TODO Function that takes an amount in Egyptian Pounds (EGP) as input and returns the equivalent amount in US Dollars (USD) using a fixed exchange rate of 1 EGP = 45.4 USD.
double convertToUSD(double amountInEGP)
{
    const double exchangeRate = 45.4;
    return amountInEGP * exchangeRate;
}

void question1()
{
    double amountInEGP;

    cout << "Enter amount in Egyptian Pounds (EGP): ";
    cin >> amountInEGP;

    double amountInUSD = convertToUSD(amountInEGP);
    cout << "Equivalent amount in US Dollars (USD): " << amountInUSD << endl;
}

// * Question 2
// TODO Function that asks user to enter their name and ID, then returns a formatted string containing both pieces of information.
string getNameAndId()
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

void question2()
{
    cout << getNameAndId() << endl;
}

// * Question 3a
// TODO Function that takes an integer as input and returns true if the number is even, and false if it is odd.
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

void question3a()
{
    int number;
    cout << "Enter an integer: ";
    cin >> number;

    checkEvenOrOdd(number);
}

// * Question 3b
// TODO Function that takes an integer as input and returns true if the number is even, and false if it is odd. (Using return statement)
bool isEven(int number)
{
    if (number % 2 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void question3b()
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
}

// * Question 4
// TODO Function that takes an age in years as input and returns the equivalent age in days, assuming 1 year is equal to 365 days.
void getAgeInDays(int ageInYears)
{
    int ageInDays = ageInYears * 365;
    cout << "Your age in days is: " << ageInDays << endl;
}

void question4()
{
    int ageInYears;
    cout << "Enter your age in years: ";
    cin >> ageInYears;

    cout << "Your age in days is: ";
    getAgeInDays(ageInYears);
}

// * Question 5
// TODO Function that takes a start and end integer as input and returns the sum of all integers between them (inclusive).
int getTotal(int start, int end)
{
    int total = 0;
    for (int i = start; i <= end; i++)
    {
        total = total + i;
    }
    return total;
}

void question5()
{
    int start, end;
    cout << "Enter your range start and end :" << endl;
    cin >> start;
    cin >> end;
    int sum = getTotal(start, end);
    cout << "The sum is:" << sum << endl;
}

// * Question 6
// TODO Function that takes a character as input and returns true if it is a vowel (a, e, i, o, u) and false otherwise.
bool isVowel(char letter)
{
    switch (letter)
    {
    case 'A':
    case 'a':
    case 'E':
    case 'e':
    case 'O':
    case 'o':
    case 'U':
    case 'u':
    case 'I':
    case 'i':
        return true;
    default:
        return false;
    }
}

void question6()
{
    char letter;
    bool vowel;
    cout << "Enter a letter:" << endl;
    cin >> letter;
    vowel = isVowel(letter);
    if (vowel) // This is the same as if (vowel == true)
        cout << "The letter is a vowel." << endl;
    else
        cout << "The letter is a consonant." << endl;
}

// * Question 7
// TODO Function that takes a string as input and returns the reversed version of that string.
void reverse(string s)
{
    for (int i = s.length() - 1; i >= 0; i--)
    {
        cout << s.at(i);
    }
}

void question7()
{
    string s;
    cout << "Enter a string:" << endl;
    cin >> s;
    cout << "The reversed string is: ";
    reverse(s);
    cout << endl;
}

// * Question 8
// TODO Function that takes a string as input and returns true if the string is a palindrome (reads the same backward as forward) and false otherwise.
bool isPalindrome(string str)
{
    int len = str.length();
    for (int i = 0; i < len / 2; i++)
    {
        if (str[i] != str[len - i - 1])
            return false;
    }
    return true;
}

void question8()
{
    string sentence;
    cin.ignore(); // ! clear leftover newline from a previous cin >> so getline reads correctly
    cout << "Enter a sentence:" << endl;
    getline(cin, sentence);
    bool check = isPalindrome(sentence);
    if (check)
        cout << "The sentence is a Palindrome." << endl;
    else
        cout << "The sentence is not a Palindrome." << endl;
}

// * Question 9
// TODO Function that takes a string representing an employee's position (e.g., "manager", "staff", "admin") and returns the corresponding salary based on the following criteria: manager = 100,000 EGP, staff = 50,000 EGP, admin = 40,000 EGP. If the position is not recognized, return 0.
int setSalary(string position)
{
    if (position == "manager")
        return 100000;
    else if (position == "staff")
        return 50000;
    else if (position == "admin")
        return 40000;
    else
        return 0;
}

void getEmployeeInput()
{
    string name, position;
    int id;
    int salary;
    cin.ignore(); // ! clear leftover newline from a previous cin >> so getline reads correctly
    cout << "Enter Employee's name:" << endl;
    getline(cin, name);
    cout << "Enter Employee's Nantional ID:" << endl;
    cin >> id;
    cout << "Enter Employee's position:" << endl;
    cin >> position;
    salary = setSalary(position);
    cout << "Employee's name is:" << name << endl;
    cout << "Employee's National ID is:" << id << endl;
    cout << "Employee's position is:" << position << endl;
    cout << "Employee's salary is:" << salary << endl;
}

void question9()
{
    getEmployeeInput();
}

// * Question 10
// TODO Function that takes an integer or a double as input and returns the absolute value of that number. (Using function overloading)
void absolute(int x)
{
    int value;
    if (x > 0)
        value = x;
    else
        value = -x;
    cout << "The absolute value of " << x << " is " << value << endl;
}

void absolute(double x)
{
    double value;
    if (x > 0)
        value = x;
    else
        value = -x;
    cout << "The absolute value of " << x << " is " << value << endl;
}

void question10()
{
    absolute(-3);
    absolute(-5.5);
}

// * Main Menu
int main()
{
    int choice;

    do
    {
        cout << "\n=========================================\n";
        cout << "                LAB 04 MENU               \n";
        cout << "=========================================\n";
        cout << " 1. EGP to USD Converter\n";
        cout << " 2. Name & ID Formatter\n";
        cout << " 3. Even/Odd Checker (void version)\n";
        cout << " 4. Even/Odd Checker (bool return)\n";
        cout << " 5. Age in Days\n";
        cout << " 6. Sum of Range\n";
        cout << " 7. Vowel Checker\n";
        cout << " 8. String Reverser\n";
        cout << " 9. Palindrome Checker\n";
        cout << "10. Employee Salary Lookup\n";
        cout << "11. Absolute Value (Overloaded)\n";
        cout << " 0. Exit\n";
        cout << "=========================================\n";
        cout << "Enter your choice: ";
        cin >> choice;
        cout << "-----------------------------------------\n";

        switch (choice)
        {
        case 1:
            question1();
            break;
        case 2:
            question2();
            break;
        case 3:
            question3a();
            break;
        case 4:
            question3b();
            break;
        case 5:
            question4();
            break;
        case 6:
            question5();
            break;
        case 7:
            question6();
            break;
        case 8:
            question7();
            break;
        case 9:
            question8();
            break;
        case 10:
            question9();
            break;
        case 11:
            question10();
            break;
        case 0:
            cout << "Exiting program." << endl;
            break;
        default:
            cout << "Invalid choice. Please try again." << endl;
        }

    } while (choice != 0);

    return 0;
}