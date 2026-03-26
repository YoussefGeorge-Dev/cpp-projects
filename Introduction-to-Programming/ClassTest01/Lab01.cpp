#include <iostream>
using namespace std;

// * Question 1

/* 
int main() 
{
cout << "Please enter your age: ";
int age;
cin >> age;

if (age <= 12) {
    cout << "Child Movie ticket price is 100 L.E." << endl;
} else if (age > 12 && age < 65) {
    cout << "Movie ticket price is 200 L.E." << endl;
} else {
    cout << "Senior Movie ticket price is 100 L.E." << endl;
}
return 0;
}   
*/

// ! Question 2 

/*
int main() 
{
int jerseynumber;
cout << "Please enter a player's jerseynumber: ";
cin >> jerseynumber;
if (1 <= jerseynumber && jerseynumber <= 19)
    {
        cout << "This is a Quarterback." << endl;
    }
else if ((20 <= jerseynumber && jerseynumber <= 29) || (60 <= jerseynumber && jerseynumber <= 79)) 
    {
        cout << "This is a Defensive Lineaman." << endl;
    }   
else if ((30 <= jerseynumber && jerseynumber <= 39) || (80 <= jerseynumber && jerseynumber <= 89)) 
    {
        cout << "This is a Tight end." << endl;
    }
else if ((40 <= jerseynumber && jerseynumber <= 59) || (90 <= jerseynumber && jerseynumber <= 99)) 
    {
        cout << "This is a Running back." << endl;
    }
else 
    {
        cout << "This is an Invalid jerseynumber." << endl;
    }
return 0;
}
*/

// * Question 3

/*
int main() 
{
    int num1,num2,num3;
    cout << "Please enter three numbers: ";
    cin >> num1 >> num2 >> num3;
    if (num1 >num2 && num1 > num3) 
    {
        cout << "The largest number is: " << num1 << endl;
    }
    else if (num2 > num1 && num2 > num3) 
    {
        cout << "The largest number is: " << num2 << endl;
    }
    else if (num3 > num1 && num3 > num2) 
    {
        cout << "The largest number is: " << num3 << endl;
    }
    else 
    {
        cout << "There is a tie for the largest number." << endl;
    }
return 0;
}
*/

// * Question 4
// ! HIGHLY IMPORTANT 
int main() 
{
char operation;
float num1,num2,result;
cout << "Please enter two numbers: ";
cin >> num1 >> num2;
cout << "Please enter an operation (+, -, *, /): ";
cin >> operation;

switch (operation) 
{
    case '+':
        result = num1 + num2;
        break;
    case '-':
        result = num1 - num2;
        break;
    case '*':
        result = num1 * num2;
        break;
    case '/':
        if (num2 != 0) 
        {
            result = num1 / num2;
        } else 
        {
            cout << "Error: Division by zero is not allowed." << endl;
        }
        break;
    default:
    result = 0;
}
 cout << num1 << " " << operation << " " << num2 << " = " << result;
 return 0;
}
