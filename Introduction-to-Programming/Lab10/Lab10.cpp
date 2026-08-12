#include <iostream>
#include <algorithm>
using namespace std;

// * Question 1
// TODO: Program that demonstrates recursion by calculating the sum of the first n natural numbers, where n is provided by the user.
int nSum(int n)
{
    if (n == 0)
    {
        return 0;
    }
    int res = n + nSum(n - 1);
    return res;
}

void question1()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int sum = nSum(n);
    cout << "Sum = " << sum << endl;
}

// * Question 2 & Question 3 shared helpers
// TODO: Question 2 calculates the minimum element in an array of integers using recursion, where the array and its size are provided by the user.
// TODO: Question 3 calculates the difference between the maximum and minimum elements in an array of integers using recursion, where the array and its size are provided by the user.
const int SIZE = 7;

// ! Function to find the minimum element in an array of integers using recursion
int findMin(int A[], int n)
{
    if (n == 1)
        return A[0];
    return min(A[n - 1], findMin(A, n - 1));
}

// ! Function to find the maximum element in an array of integers using recursion
int findMax(int A[], int n)
{
    // if size = 0 means whole array has been traversed
    if (n == 1)
        return A[0];
    return max(A[n - 1], findMax(A, n - 1));
}

// ! Function to find the difference between the maximum and minimum elements in the array using recursion
int findDiff(int A[])
{
    int n = SIZE;
    int maximum = findMax(A, n);
    int minimum = findMin(A, n);
    return (maximum - minimum);
}

void question2()
{
    int A[] = {3, 4, 65, 6, 50, 10, 2};
    int n = SIZE;
    cout << "The minimum number is " << findMin(A, n) << endl;
}

void question3()
{
    int A[] = {3, 4, 65, 6, 50, 10, 2};
    cout << "The Difference is " << findDiff(A) << endl;
}

// * Question 4
// TODO: Program that prints a sequence that adds 5 to the previous number, starting from 5, and continues this pattern for a total of n numbers, where n is provided by the user.
int PrintSequence(int n)
{
    if (n == 1)
    {
        cout << "5 ";
        return 5;
    }
    int res = 5 + PrintSequence(n - 1);
    cout << res << " ";
    return res;
}

void question4()
{
    int n;
    cout << "Enter how many numbers to print: ";
    cin >> n;
    PrintSequence(n);
    cout << endl;
}

// * Main Menu
int main()
{
    int choice;

    do
    {
        cout << "\n=========================================\n";
        cout << "                LAB 10 MENU               \n";
        cout << "=========================================\n";
        cout << " 1. Sum of First N Natural Numbers (recursion)\n";
        cout << " 2. Minimum Element in Array (recursion)\n";
        cout << " 3. Max - Min Difference in Array (recursion)\n";
        cout << " 4. Print +5 Sequence (recursion)\n";
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
        case 0:
            cout << "Exiting program." << endl;
            break;
        default:
            cout << "Invalid choice. Please try again." << endl;
        }

    } while (choice != 0);

    return 0;
}