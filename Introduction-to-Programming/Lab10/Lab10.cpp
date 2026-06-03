#include <iostream>
using namespace std;

// * Question 1
// TODO: Program that demonstrates recursion by calculating the sum of the first n natural numbers, where n is provided by the user.
/*
int nSum( int n)
{
 if ( n == 0) 
 {
 return 0;
 }
 int res = n + nSum( n - 1);
 return res;
}
int main()
{
 int n;
 cout << "Enter a number: ";
 cin >> n;
 int sum = nSum(n);
 cout << "Sum = " << sum;
 return 0;
}
*/

// * Question 2
// TODO: Program that calculates the minimum element in an array of integers using recursion, where the array and its size are provided by the user.
/*
const int SIZE = 7;
int findMin ( int A[], int n)
{
 if (n == 1)
 return A[0];
 return min ( A[n - 1], findMin (A,n-1));
}
int main()
{
 int A[] = { 3, 4, 65, 6, 50, 10, 2 };
 int n = SIZE;
 cout << "The minimum number is " << findMin (A, n);
 return 0;
}
*/
// * Question 3
// TODO: Program that calculates the difference between the maximum and minimum elements in an array of integers using recursion, where the array and its size are provided by the user.
/*
const int SIZE = 7;
! Function to find the minimum element in an array of integers using recursion
int findMin( int A[], int n)
{
 if (n == 1)
 return A[0];
 return min(A[n-1], findMin(A,n-1));
}
! Function to find the maximum element in an array of integers using recursion
int findMax(int A[], int n)
{
 // if size = 0 means whole array has been traversed
 if (n==1)
 return A[0];
 return max(A[n-1], findMax(A,n-1));
}
! Function to find the difference between the maximum and minimum elements in the array using recursion
int findDiff(int A[])
{
 int n = SIZE;
 int maximum = findMax(A,n);
 int minimum = findMin(A,n);
 return (maximum - minimum);
}
int main()
{
 int A[] = { 3, 4, 65, 6, 50, 10, 2 };
 cout << "The Difference is " << findDiff(A);
 return 0;
}
*/
// * Question 4
// TODO: Program that prints a sequence that adds 5 to the previous number, starting from 5, and continues this pattern for a total of n numbers, where n is provided by the user. 
/*
int PrintSequence(int n)
{
 if (n==1) 
 {
 cout << "5 " ;
 return 5;
 }
 int res = 5 + PrintSequence(n-1);
 cout << res << " " ;
 return res;
}

int main()
{
 PrintSequence(10);
 return 0;
}
*/
