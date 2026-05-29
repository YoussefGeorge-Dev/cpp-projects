#include <iostream>
using namespace std;

// * Question 1
// TODO: Program that uses a void function with pointers to convert an amount in Egyptian pounds into its equivalent value in dollars and euros.

/*
void convert_currency(float pounds, float& dollars, float& euros)
{
 dollars = pounds / 47.5;
 euros = pounds / 52.5;
}

int main() {
 float pounds, dollars, euros;
 cout << "Enter the amount in Egyptian pounds:";
 cin >> pounds;
 convert_currency(pounds, dollars, euros);
 cout << "The amount in dollars is: " << dollars << endl;
 cout << "The amount in euros is: " << euros << endl;
 return 0;
}
*/

// * Question 2
// TODO: Program that uses a function with pointers to count the number of commas and periods in a given string.

/*
void count_punctuation(string s, int& periods, int& commas)
{
 for (int i = 0; i < s.length(); i++)
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

int main() {
string sentence;
 int periods = 0, commas = 0;
 cout << "Enter a sentence:";
 getline(cin, sentence);
 count_punctuation(sentence, periods, commas);
 cout << "The number of periods is: " << periods << endl;
 cout << "the number of commas is: " << commas << endl;
 return 0;
}
*/

// * Question 3
// TODO: Program that finds the minimum value in an array, decrements all elements by that minimum, and prints the resulting array.

/*
! Function 1: Returns the minimum value of an array
int findMinimum(int arr[], int size) {
    int minVal = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] < minVal) {
            minVal = arr[i];
        }
    }
    return minVal;
}

! Function 2: Decrements each element by the minimum value
void decrementByMinimum(int arr[], int size, int minVal) {
    for (int i = 0; i < size; i++) {
        arr[i] -= minVal;
    }
}

! Function 3: Prints the array elements
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    cout << std::endl;
}

int main() {
    int arr[] = {10, 5, 8, 3, 7};
    int size = sizeof(arr) / sizeof(arr[0]);

    std::cout << "Original array: ";
    printArray(arr, size);

    int minVal = findMinimum(arr, size);
    cout << "Minimum value: " << minVal << endl;

    decrementByMinimum(arr, size, minVal);

    cout << "Modified array: ";
    printArray(arr, size);

    return 0;
}
*/

// * Question 4
// TODO: Program that converts all odd integers in an array to even by adding 1, and includes a function to display the array.
/*
! Function to check elements and convert odd numbers to even
void convertToEven(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 != 0) {
            arr[i] += 1;
        }
    }
}

! Function to print the array elements
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << std::endl;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 7, 10};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    printArray(arr, size);

    convertToEven(arr, size);

    cout << "Converted array: ";
    printArray(arr, size);

    return 0;
}
*/

// * Question 5
// TODO: Program that converts all upper-case letters in a character array to lower-case using a function, and provides a second function to display the array.
/*
const int SIZE = 5;

! Function to convert uppercase letters to lowercase

void convertToLower(char arr[])
{
 for (int i = 0; i < SIZE; i++)
 {
 if (isupper(arr[i]))
 arr[i] = tolower(arr[i]);
 }
}
! Function to print the character array
void printArray(char arr[])
{
 for (int i = 0; i < SIZE; i++)
 {
 cout << arr[i] << " ";
 }
}

int main() 
{
 char arr[SIZE] = { 'H','E','l','L','o' };
 convertToLower(arr);
 printArray(arr);
 return 0;
}
*/

// * Question 6
// TODO: Program that uses a function to swap elements from the beginning and end of an array to reverse it, along with a function to print the array.
/*
const int SIZE = 5;
! Function to swap elements from the beginning and end of an array to reverse it
void swapElements(int arr[])
{
 int temp;
 for (int i = 0; i < SIZE / 2; i++)
 {
 temp = arr[i];
 arr[i] = arr[SIZE - 1 - i];
 arr[SIZE - 1 - i] = temp;
 }
}
! Function to print the array elements
void printArray(int arr[])
{
 for (int i = 0; i < SIZE; i++)
 {
 cout << arr[i] << " ";
 }
}

int main() {
 int arr[SIZE] = { 10,20,30,40,50 };
 swapElements(arr);
 printArray(arr);
 return 0;
}
*/
// * Question 7
// TODO: Program that uses a function to compare two 2D matrices and return true if they are identical, or false otherwise.
/*
const int ROWS = 3;
const int COLS = 4;

bool isIdentical(int a[][COLS], int b[][COLS])
{
 for (int i = 0; i < ROWS; i++)
 {
 for (int j = 0; j < COLS; j++)
 {
 if (a[i][j] != b[i][j])
 return false;
 }
 }
 return true;
}

int main() {
 int a[ROWS][COLS] = { {10,20,30,40},{50,60,70,80},{100,200,300,400} };
 int b[ROWS][COLS] = { {10,20,30,40},{50,60,70,80},{100,200,300,400} };
 bool check = isIdentical(a, b);
 if (check)
 cout << "The two matrics are identical." << endl;
 else
 cout << "The two matrics are not identical." << endl;
 return 0;
}
*/
// * Question 8
// TODO: Program that calculates the average of elements in each row of a matrix (excluding the last column) and stores the result in that last column.
/*
const int ROWS = 3;
const int COLS = 5;
! Function to calculate the average of each row in a 2D array and store it in the last column
void calculateAverage(float a[][COLS])
{
 float sum, avg;
 for (int i = 0; i < ROWS; i++)
 {
 sum = 0;
 for (int j = 0; j < COLS - 1; j++)
 {
 sum += a[i][j];
 }
 avg = sum / (COLS - 1);
 a[i][COLS - 1] = avg;
 }
}

! Function to print the 2D array elements
void printArray(float a[][COLS])
{
 for (int i = 0; i < ROWS; i++)
 {
 for (int j = 0; j < COLS; j++)
 {
 cout << a[i][j] << " ";
 }
 cout << endl;
 }
}

int main() {
 float a[ROWS][COLS] = { {10,20,30,40,0},{11,25,30,80,0},{35,66,88,97,0} };
 calculateAverage(a);
 printArray(a);
 return 0;
}
*/