#include <iostream>
#include <string>
using namespace std;

// * Question 1
// TODO: This question is about defining a structure for a rectangle, calculating its area and perimeter based on user input for length and width, and then printing the results.

/*
int main() 
{
    struct Rectangle 
{
    double length;
    double width;
    double perimeter;
    double area;
};

    Rectangle rect;

    cout << "Enter the length of the rectangle: ";
    cin >> rect.length;

    cout << "Enter the width of the rectangle: ";
    cin >> rect.width;

    rect.area = rect.length * rect.width;
    rect.perimeter = 2 * (rect.length + rect.width);

    cout << "Area      : " << rect.area << endl;
    cout << "Perimeter : " << rect.perimeter << endl;

    return 0;
}
*/

// * Question 3
// TODO: This question is about defining a structure for a complex number, implementing functions to perform addition, subtraction, and multiplication of complex numbers, and then using these functions to perform operations on two complex numbers entered by the user.

/*
struct Complex 
{
    float real;
    float imaginary;
};

void add(Complex c1, Complex c2) {
    Complex result;
    result.real = c1.real + c2.real;
    result.imaginary = c1.imaginary + c2.imaginary;
    cout << "Addition: " << result.real << " + " << result.imaginary << "i" << endl;
}

void subtract(Complex c1, Complex c2) {
    Complex result;
    result.real = c1.real - c2.real;
    result.imaginary = c1.imaginary - c2.imaginary;
    cout << "Subtraction: " << result.real << " + " << result.imaginary << "i" << endl;
}

void multiply(Complex c1, Complex c2) {
    Complex result;
    result.real = (c1.real * c2.real) - (c1.imaginary * c2.imaginary);
    result.imaginary = (c1.real * c2.imaginary) + (c1.imaginary * c2.real);
    cout << "Multiplication: " << result.real << " + " << result.imaginary << "i" << endl;
}

int main() {
    Complex c1, c2;

    cout << "Enter real and imaginary parts of first complex number: ";
    cin >> c1.real >> c1.imaginary;

    cout << "Enter real and imaginary parts of second complex number: ";
    cin >> c2.real >> c2.imaginary;

    add(c1, c2);
    subtract(c1, c2);
    multiply(c1, c2);

    return 0;
}
*/

// * Question 5
//TODO: This question is about defining a structure for an employee, including fields for ID, name, salary, and performance rating, and then implementing functions to input employee data, update salaries based on performance ratings, and print the updated employee information.

/*
struct Employee {
    int ID;
    string name;
    float salary;
    float performance;
};

void getEmployees(Employee employees[], int size) {
    for (int i = 0; i < size; i++) {
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

void updateSalary(Employee employees[], int size) {
    for (int i = 0; i < size; i++) {
        if (employees[i].performance >= 80) {
            employees[i].salary *= 1.20;
        }
    }
}

void printEmployees(Employee employees[], int size) {
    cout << "\n--- Employees Data After Salary Update ---" << endl;
    for (int i = 0; i < size; i++) {
        cout << "\nEmployee " << i + 1 << ":" << endl;
        cout << "ID          : " << employees[i].ID << endl;
        cout << "Name        : " << employees[i].name << endl;
        cout << "Salary      : " << employees[i].salary << endl;
        cout << "Performance : " << employees[i].performance << "%" << endl;
    }
}

int main() {
    Employee employees[3];

    getEmployees(employees, 3);
    updateSalary(employees, 3);
    printEmployees(employees, 3);

    return 0;
}

*/

// * Question 6
// TODO: This question is about defining an enum for the days of the week starting from Sunday as day 1, taking an integer input from the user, and printing the corresponding day name using a switch statement. 

/*
enum Day {
    Sunday = 1,
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday
};

int main() {
    int input;
    cout << "Enter a day number (1-7): ";
    cin >> input;

    Day day = Day(input);

    switch (day) {
        case Sunday:    cout << "Sunday" << endl;    break;
        case Monday:    cout << "Monday" << endl;    break;
        case Tuesday:   cout << "Tuesday" << endl;   break;
        case Wednesday: cout << "Wednesday" << endl; break;
        case Thursday:  cout << "Thursday" << endl;  break;
        case Friday:    cout << "Friday" << endl;    break;
        case Saturday:  cout << "Saturday" << endl;  break;
        default:        cout << "Invalid day number! Please enter 1-7." << endl;
    }

    return 0;
}
*/
