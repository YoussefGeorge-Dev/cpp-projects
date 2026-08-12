#include <iostream>
#include <string>
using namespace std;

// * Question 1
// TODO: This question is about defining a structure for a rectangle, calculating its area and perimeter based on user input for length and width, and then printing the results.
struct Rectangle
{
    double length;
    double width;
    double perimeter;
    double area;
};

void question1()
{
    Rectangle rect;

    cout << "Enter the length of the rectangle: ";
    cin >> rect.length;

    cout << "Enter the width of the rectangle: ";
    cin >> rect.width;

    rect.area = rect.length * rect.width;
    rect.perimeter = 2 * (rect.length + rect.width);

    cout << "Area      : " << rect.area << endl;
    cout << "Perimeter : " << rect.perimeter << endl;
}

// * Question 2
// TODO: This question is about defining a structure for a student with a name and age, storing multiple students in an array, and printing only the students who are 14 years or older.
struct Student
{
    string name;
    int age;
};

void getStudents(Student students[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << "\nEnter details for Student " << i + 1 << ":" << endl;
        cout << "Name: ";
        cin >> students[i].name;
        cout << "Age: ";
        cin >> students[i].age;
    }
}

void printOlderStudents(Student students[], int size)
{
    cout << "\nStudents aged 14 or older:" << endl;
    bool found = false;
    for (int i = 0; i < size; i++)
    {
        if (students[i].age >= 14)
        {
            cout << "Name: " << students[i].name << ", Age: " << students[i].age << endl;
            found = true;
        }
    }
    if (!found)
    {
        cout << "No students aged 14 or older." << endl;
    }
}

void question2()
{
    const int SIZE = 3;
    Student students[SIZE];

    getStudents(students, SIZE);
    printOlderStudents(students, SIZE);
}

// * Question 3
// TODO: This question is about defining a structure for a complex number, implementing functions to perform addition, subtraction, and multiplication of complex numbers, and then using these functions to perform operations on two complex numbers entered by the user.
struct Complex
{
    float real;
    float imaginary;
};

void add(Complex c1, Complex c2)
{
    Complex result;
    result.real = c1.real + c2.real;
    result.imaginary = c1.imaginary + c2.imaginary;
    cout << "Addition: " << result.real << " + " << result.imaginary << "i" << endl;
}

void subtract(Complex c1, Complex c2)
{
    Complex result;
    result.real = c1.real - c2.real;
    result.imaginary = c1.imaginary - c2.imaginary;
    cout << "Subtraction: " << result.real << " + " << result.imaginary << "i" << endl;
}

void multiply(Complex c1, Complex c2)
{
    Complex result;
    result.real = (c1.real * c2.real) - (c1.imaginary * c2.imaginary);
    result.imaginary = (c1.real * c2.imaginary) + (c1.imaginary * c2.real);
    cout << "Multiplication: " << result.real << " + " << result.imaginary << "i" << endl;
}

void question3()
{
    Complex c1, c2;

    cout << "Enter real and imaginary parts of first complex number: ";
    cin >> c1.real >> c1.imaginary;

    cout << "Enter real and imaginary parts of second complex number: ";
    cin >> c2.real >> c2.imaginary;

    add(c1, c2);
    subtract(c1, c2);
    multiply(c1, c2);
}

// * Question 4
// TODO: This question is about defining a structure for a customer with a name, account number, and balance, and implementing functions for the customer to withdraw from and deposit into their account.
struct Customer
{
    string name;
    int accountNumber;
    double balance;
};

void withdraw(Customer &customer, double amount)
{
    if (amount <= 0)
    {
        cout << "Withdrawal amount must be positive." << endl;
        return;
    }
    if (amount > customer.balance)
    {
        cout << "Insufficient funds. Withdrawal denied." << endl;
        return;
    }
    customer.balance -= amount;
    cout << "Withdrawal successful. New balance: " << customer.balance << endl;
}

void deposit(Customer &customer, double amount)
{
    if (amount <= 0)
    {
        cout << "Deposit amount must be positive." << endl;
        return;
    }
    customer.balance += amount;
    cout << "Deposit successful. New balance: " << customer.balance << endl;
}

void question4()
{
    Customer customer;
    double amount;

    cout << "Enter customer name: ";
    cin >> customer.name;
    cout << "Enter account number: ";
    cin >> customer.accountNumber;
    cout << "Enter starting balance: ";
    cin >> customer.balance;

    cout << "\nEnter amount to withdraw: ";
    cin >> amount;
    withdraw(customer, amount);

    cout << "\nEnter amount to deposit: ";
    cin >> amount;
    deposit(customer, amount);
}

// * Question 5
// TODO: This question is about defining a structure for an employee, including fields for ID, name, salary, and performance rating, and then implementing functions to input employee data, update salaries based on performance ratings, and print the updated employee information.
struct Employee
{
    int ID;
    string name;
    float salary;
    float performance;
};

void getEmployees(Employee employees[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << "\nEnter details for Employee " << i + 1 << ":" << endl;
        cout << "ID: ";
        cin >> employees[i].ID;
        cout << "Name: ";
        cin >> employees[i].name;
        cout << "Salary: ";
        cin >> employees[i].salary;
        cout << "Performance: ";
        cin >> employees[i].performance;
    }
}

void updateSalary(Employee employees[], int size)
{
    for (int i = 0; i < size; i++)
    {
        if (employees[i].performance >= 80)
        {
            employees[i].salary = employees[i].salary * 1.20;
        }
    }
}

void printEmployees(Employee employees[], int size)
{
    cout << "Employees Data After Salary Update:" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "Employee " << i + 1 << ":" << endl;
        cout << "ID          : " << employees[i].ID << endl;
        cout << "Name        : " << employees[i].name << endl;
        cout << "Salary      : " << employees[i].salary << endl;
        cout << "Performance : " << employees[i].performance << "%" << endl;
    }
}

void question5()
{
    const int SIZE = 3;
    Employee employees[SIZE];

    getEmployees(employees, SIZE);
    updateSalary(employees, SIZE);
    printEmployees(employees, SIZE);
}

// * Question 6
// TODO: This question is about defining an enum for the days of the week starting from Sunday as day 1, taking an integer input from the user, and printing the corresponding day name using a switch statement.
enum Day
{
    Sunday = 1,
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday
};

void question6()
{
    int input;
    cout << "Enter a day number (1-7): ";
    cin >> input;

    Day day = Day(input);

    switch (day)
    {
    case Sunday:
        cout << "Sunday" << endl;
        break;
    case Monday:
        cout << "Monday" << endl;
        break;
    case Tuesday:
        cout << "Tuesday" << endl;
        break;
    case Wednesday:
        cout << "Wednesday" << endl;
        break;
    case Thursday:
        cout << "Thursday" << endl;
        break;
    case Friday:
        cout << "Friday" << endl;
        break;
    case Saturday:
        cout << "Saturday" << endl;
        break;
    default:
        cout << "Invalid day number! Please enter 1-7." << endl;
    }
}

// * Main Menu
int main()
{
    int choice;

    do
    {
        cout << "\n=========================================\n";
        cout << "                LAB 07 MENU               \n";
        cout << "=========================================\n";
        cout << " 1. Rectangle Area & Perimeter (struct)\n";
        cout << " 2. Students Aged 14+ (struct array)\n";
        cout << " 3. Complex Number Arithmetic (struct)\n";
        cout << " 4. Customer Withdraw & Deposit (struct)\n";
        cout << " 5. Employee Salary Update (struct)\n";
        cout << " 6. Day of Week Lookup (enum)\n";
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
        case 0:
            cout << "Exiting program." << endl;
            break;
        default:
            cout << "Invalid choice. Please try again." << endl;
        }

    } while (choice != 0);

    return 0;
}