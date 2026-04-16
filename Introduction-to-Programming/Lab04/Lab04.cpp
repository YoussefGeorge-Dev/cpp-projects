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
// TODO Function that takes a start and end integer as input and returns the sum of all integers between them (inclusive).
/*
int getTotal(int start, int end)
{
 int total = 0;
 for (int i = start; i <= end; i++)
 {
 total = total + i;
 }
 return total;
}

int main() 
{
 int start, end;
 cout << "Enter your range start and end :" << endl;
 cin >> start;
 cin >> end;
 int sum = getTotal(start,end);
 cout << "The sum is:" << sum;
 return 0;
}
*/

// * Question 6
// TODO Function that takes a character as input and returns true if it is a vowel (a, e, i, o, u) and false otherwise.
/*
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

int main() 
{
 char letter;
 bool vowel;
 cout << "Enter a letter:" << endl;
 cin >> letter;
 vowel = isVowel(letter);
 if (vowel) //This is the same as if (vowel == true)
 cout << "The letter is a vowel." << endl;
 else
 cout << "The letter is a consonant." << endl;
 return 0;
}
*/

// * Question 7
// TODO Function that takes a string as input and returns the reversed version of that string.
/*
void reverse (string s)
{
    for (int i = s.length() - 1; i >= 0; i--) 
    {
        cout << s.at(i);
    }
    
}

int main() 
{
    string s;
    cout << "Enter a string:" << endl;
    cin >> s;
    cout << "The reversed string is: ";
    reverse(s);
    return 0;
}
*/

// * Question 8
// TODO Function that takes a string as input and returns true if the string is a palindrome (reads the same backward as forward) and false otherwise.
/*
bool isPalindrome(string str)
{

 int len = str.length();
 for (int i = 0; i < len / 2; i++) {
 if (str[i] != str[len - i - 1])
 return false;
 }
 return true;
}

int main()
{
 string sentence;
 cout << "Enter a sentence:" << endl;
 getline(cin, sentence);
 bool check = isPalindrome(sentence);
 if (check)
 cout << "The sentence is a Palindrome." << endl;
 else
 cout << "The sentence is not a Palindrome." << endl;
 return 0;
}
*/

// * Question 9
// TODO Function that takes a string representing an employee's position (e.g., "manager", "staff", "admin") and returns the corresponding salary based on the following criteria: manager = 100,000 EGP, staff = 50,000 EGP, admin = 40,000 EGP. If the position is not recognized, return 0.
/*
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

void getInput()
{
 string name,position;
 int id;
 int salary;
 cout << "Enter Employee's name:" << endl;
 getline(cin, name);
 cout << "Enter Employee's Nantional ID:" << endl;
 cin >> id;
 cout << "Enter Employee's position:" << endl;
 cin>>position;
 salary = setSalary(position);
 cout << "Employee's name is:" <<name<< endl;
 cout << "Employee's National ID is:" << id << endl;
 cout << "Employee's position is:" << position << endl;
 cout << "Employee's salary is:" << salary << endl;
}

int main()
{
 getInput();
 return 0;
}
*/

// * Question 10
// TODO Function that takes an integer or a double as input and returns the absolute value of that number. (Using function overloading)

/*
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


int main()
{
 absolute(-3);
 absolute(-5.5);
 return 0;
}
*/