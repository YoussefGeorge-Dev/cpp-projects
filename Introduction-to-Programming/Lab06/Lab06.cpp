#include <iostream>
#include <string>
using namespace std;

// * Question 1
// TODO: Program that uses a void function with pointers to convert an amount in Egyptian pounds into its equivalent value in dollars and euros.
void convert_currency(float pounds, float &dollars, float &euros)
{
    dollars = pounds / 47.5;
    euros = pounds / 52.5;
}

void question1()
{
    float pounds, dollars, euros;
    cout << "Enter the amount in Egyptian pounds:";
    cin >> pounds;
    convert_currency(pounds, dollars, euros);
    cout << "The amount in dollars is: " << dollars << endl;
    cout << "The amount in euros is: " << euros << endl;
}

// * Question 2
// TODO: Program that uses a function with pointers to count the number of commas and periods in a given string.
void count_punctuation(string s, int &periods, int &commas)
{
    for (size_t i = 0; i < s.length(); i++)
    {
        if (s[i] == '.')
        {
            periods++;
        }
        if (s[i] == ',')
        {
            commas++;
        }
    }
}

void question2()
{
    string sentence;
    int periods = 0, commas = 0;
    cin.ignore(); // ! clear leftover newline from a previous cin >> so getline reads correctly
    cout << "Enter a sentence:";
    getline(cin, sentence);
    count_punctuation(sentence, periods, commas);
    cout << "The number of periods is: " << periods << endl;
    cout << "the number of commas is: " << commas << endl;
}

// * Question 3
// TODO: Program that finds the minimum value in an array, decrements all elements by that minimum, and prints the resulting array.

// ! Function 1: Returns the minimum value of an array
int findMinimum(int arr[], int size)
{
    int minVal = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (arr[i] < minVal)
        {
            minVal = arr[i];
        }
    }
    return minVal;
}

// ! Function 2: Decrements each element by the minimum value
void decrementByMinimum(int arr[], int size, int minVal)
{
    for (int i = 0; i < size; i++)
    {
        arr[i] -= minVal;
    }
}

// ! Function 3: Prints the array elements
void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void question3()
{
    int arr[] = {10, 5, 8, 3, 7};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    printArray(arr, size);

    int minVal = findMinimum(arr, size);
    cout << "Minimum value: " << minVal << endl;

    decrementByMinimum(arr, size, minVal);

    cout << "Modified array: ";
    printArray(arr, size);
}

// * Question 4
// TODO: Program that converts all odd integers in an array to even by adding 1, and includes a function to display the array.
// ! Function to check elements and convert odd numbers to even
void convertToEven(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] % 2 != 0)
        {
            arr[i] += 1;
        }
    }
}

void question4()
{
    int arr[] = {1, 2, 3, 4, 5, 7, 10};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    printArray(arr, size); // ! reuses the int-array printArray() defined for Question 3

    convertToEven(arr, size);

    cout << "Converted array: ";
    printArray(arr, size);
}

// * Question 5
// TODO: Program that converts all upper-case letters in a character array to lower-case using a function, and provides a second function to display the array.
const int Q5_SIZE = 5;

// ! Function to convert uppercase letters to lowercase
void convertToLower(char arr[])
{
    for (int i = 0; i < Q5_SIZE; i++)
    {
        if (isupper(arr[i]))
            arr[i] = tolower(arr[i]);
    }
}

// ! Function to print the character array
void printCharArray(char arr[])
{
    for (int i = 0; i < Q5_SIZE; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void question5()
{
    char arr[Q5_SIZE] = {'H', 'E', 'l', 'L', 'o'};
    convertToLower(arr);
    printCharArray(arr);
}

// * Question 6
// TODO: Program that uses a function to swap elements from the beginning and end of an array to reverse it, along with a function to print the array.
const int Q6_SIZE = 5;

// ! Function to swap elements from the beginning and end of an array to reverse it
void swapElements(int arr[])
{
    int temp;
    for (int i = 0; i < Q6_SIZE / 2; i++)
    {
        temp = arr[i];
        arr[i] = arr[Q6_SIZE - 1 - i];
        arr[Q6_SIZE - 1 - i] = temp;
    }
}

// ! Function to print the array elements
void printFixedArray(int arr[])
{
    for (int i = 0; i < Q6_SIZE; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void question6()
{
    int arr[Q6_SIZE] = {10, 20, 30, 40, 50};
    swapElements(arr);
    printFixedArray(arr);
}

// * Question 7
// TODO: Program that uses a function to compare two 2D matrices and return true if they are identical, or false otherwise.
const int Q7_ROWS = 3;
const int Q7_COLS = 4;

bool isIdentical(int a[][Q7_COLS], int b[][Q7_COLS])
{
    for (int i = 0; i < Q7_ROWS; i++)
    {
        for (int j = 0; j < Q7_COLS; j++)
        {
            if (a[i][j] != b[i][j])
                return false;
        }
    }
    return true;
}

void question7()
{
    int a[Q7_ROWS][Q7_COLS] = {{10, 20, 30, 40}, {50, 60, 70, 80}, {100, 200, 300, 400}};
    int b[Q7_ROWS][Q7_COLS] = {{10, 20, 30, 40}, {50, 60, 70, 80}, {100, 200, 300, 400}};
    bool check = isIdentical(a, b);
    if (check)
        cout << "The two matrics are identical." << endl;
    else
        cout << "The two matrics are not identical." << endl;
}

// * Question 8
// TODO: Program that calculates the average of elements in each row of a matrix (excluding the last column) and stores the result in that last column.
const int Q8_ROWS = 3;
const int Q8_COLS = 5;

// ! Function to calculate the average of each row in a 2D array and store it in the last column
void calculateAverage(float a[][Q8_COLS])
{
    float sum, avg;
    for (int i = 0; i < Q8_ROWS; i++)
    {
        sum = 0;
        for (int j = 0; j < Q8_COLS - 1; j++)
        {
            sum += a[i][j];
        }
        avg = sum / (Q8_COLS - 1);
        a[i][Q8_COLS - 1] = avg;
    }
}

// ! Function to print the 2D array elements
void printMatrix(float a[][Q8_COLS])
{
    for (int i = 0; i < Q8_ROWS; i++)
    {
        for (int j = 0; j < Q8_COLS; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}

void question8()
{
    float a[Q8_ROWS][Q8_COLS] = {{10, 20, 30, 40, 0}, {11, 25, 30, 80, 0}, {35, 66, 88, 97, 0}};
    calculateAverage(a);
    printMatrix(a);
}

// * Main Menu
int main()
{
    int choice;

    do
    {
        cout << "\n=========================================\n";
        cout << "                LAB 06 MENU               \n";
        cout << "=========================================\n";
        cout << " 1. EGP to USD/EUR Converter (by reference)\n";
        cout << " 2. Count Commas & Periods\n";
        cout << " 3. Decrement Array by Minimum\n";
        cout << " 4. Convert Odd Numbers to Even\n";
        cout << " 5. Convert Uppercase to Lowercase\n";
        cout << " 6. Reverse Array via Swapping\n";
        cout << " 7. Compare Two Matrices\n";
        cout << " 8. Row Averages in Matrix\n";
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