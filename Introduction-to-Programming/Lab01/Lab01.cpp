#include <iostream>
using namespace std;

// * Question 1
// TODO: This question is about determining the price of a movie ticket based on the age of the customer.
void question1()
{
    cout << "Please enter your age: ";
    int age;
    cin >> age;

    if (age <= 12)
    {
        cout << "Child Movie ticket price is 100 L.E." << endl;
    }
    else if (age > 12 && age < 65)
    {
        cout << "Movie ticket price is 200 L.E." << endl;
    }
    else
    {
        cout << "Senior Movie ticket price is 100 L.E." << endl;
    }
}

// * Question 2
// ! HIGHLY IMPORTANT
// TODO: This question is about determining the position of a football player based on their jersey number.
void question2()
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
}

// * Question 3
// TODO: This question is about finding the largest of three numbers entered by the user.
void question3()
{
    int num1, num2, num3;
    cout << "Please enter three numbers: ";
    cin >> num1 >> num2 >> num3;

    if (num1 > num2 && num1 > num3)
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
}

// * Question 4
// ! HIGHLY IMPORTANT
// TODO: This question is about performing basic arithmetic operations based on user input and handling division by zero appropriately.
void question4()
{
    char operation;
    float num1, num2, result;
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
        }
        else
        {
            cout << "Error: Division by zero is not allowed." << endl;
        }
        break;
    default:
        result = 0;
    }
    cout << num1 << " " << operation << " " << num2 << " = " << result;
}

// * Question 5
// TODO: This question is about calculating the total price of items based on user input and handling invalid item entries appropriately.
void question5()
{
    char product;
    int price = 0;
    cout << "Please enter 5 items" << endl;

    for (int i = 0; i < 5; i++)
    {
        cin >> product;
        switch (product)
        {
        case 'Y':
        case 'y':
            price = price + 5;
            break;
        case 'C':
        case 'c':
            price = price + 200;
            break;
        case 'T':
        case 't':
            price = price + 30;
            break;
        case 'M':
        case 'm':
            price = price + 45;
            break;
        default:
            cout << "Invalid item entered." << endl;
        }
    }
    cout << "Total price: " << price << " L.E." << endl;
}

// * Question 6
// ! HIGHLY IMPORTANT
// TODO: This question is about printing a pattern of asterisks in a specific format based on user input for the number of rows.
void question6()
{
    for (int i = 5; i >= 1; i--)
    {
        for (int j = i; j >= 1; j--)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

// * Question 7
// ! HIGHLY IMPORTANT
// TODO: This question is about printing a pattern of letters in a specific format based on user input for the number of rows, and resetting the letter back to 'A' for each new line.
void question7()
{
    int letter = 'A';
    for (int i = 5; i >= 1; i--)
    {
        for (int j = i; j >= 1; j--)
        {
            cout << (char)letter << " ";
            letter++;
        }
        cout << endl;
        letter = 'A'; // ! to reset the letter back to 'A' for the next line
    }
}

// * Question 8
// TODO: This question is about printing a pattern of numbers in a specific format based on user input for the number of rows, and ensuring that the numbers continue sequentially across lines without resetting.
void question8()
{
    int rows, number = 1;
    cout << "Enter the number of rows: ";
    cin >> rows;

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << number << " ";
            number++;
        }
        cout << endl;
    }
}

int main()
{
    int choice;

    do
    {
        cout << "\n=========================================\n";
        cout << "                LAB 01 MENU               \n";
        cout << "=========================================\n";
        cout << " 1. Movie Ticket Price by Age\n";
        cout << " 2. Football Player Position by Jersey Number\n";
        cout << " 3. Largest of Three Numbers\n";
        cout << " 4. Basic Arithmetic Calculator\n";
        cout << " 5. Total Price of Items\n";
        cout << " 6. Asterisk Pattern\n";
        cout << " 7. Letter Pattern\n";
        cout << " 8. Sequential Number Pattern\n";
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
            question3();
            break;
        case 4:
            question4();
            break;
        case 5:
            question5();
            break;
        case 6:
            question6();
            break;
        case 7:
            question7();
            break;
        case 8:
            question8();
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