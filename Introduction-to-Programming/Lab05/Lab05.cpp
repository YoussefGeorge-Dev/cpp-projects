#include <iostream>
using namespace std;

// * Question 1
// TODO: Program that initializes two character variables, uses pointers to modify their values, and verifies the changes.
void question1()
{
   char first = 'A';
   char second = 'B';
   char *ptr1 = &first;
   char *ptr2 = &second;

   *ptr1 = 'C';
   *ptr2 = 'D';

   cout << "first: " << first << endl;
   cout << "first (via pointer): " << *ptr1 << endl;
   cout << "second: " << second << endl;
   cout << "second (via pointer): " << *ptr2 << endl;
}

// * Question 2
// TODO: Program that initializes three integer variables, uses pointers to perform arithmetic operations, modifies the values, and repeats the arithmetic.
void question2()
{
   int x = 10;
   int y = 20;
   int z = 30;
   int *xptr = &x;
   int *yptr = &y;
   int *zptr = &z;
   int sum = *xptr + *yptr + *zptr;
   int product = *xptr * *yptr * *zptr;
   cout << "The sum =" << sum << endl;
   cout << "The product =" << product << endl;

   x = 5;
   y = 6;
   z = 7;
   sum = *xptr + *yptr + *zptr;
   product = *xptr * *yptr * *zptr;
   cout << "The sum =" << sum << endl;
   cout << "The product =" << product << endl;
}

// * Question 3
// TODO: Program that takes a start and end value from the user and calculates the sum of the range using a pointer to the starting element.
void question3()
{
   int start, end, sum = 0;
   int *ptr;
   cout << "Enter the start:" << endl;
   cin >> start;
   cout << "Enter the end:" << endl;
   cin >> end;
   ptr = &start;

   for (int i = start; i <= end; i++)
   {
      sum += *ptr;
      *ptr = *ptr + 1;
   }
   cout << "The sum =" << sum << endl;
}

// * Question 4
// TODO: Program that swaps the values of two string variables using pointers.
void question4()
{
   string x = "Hello";
   string y = "World";
   string *p1 = &x;
   string *p2 = &y;
   string temp = *p1;
   *p1 = *p2;
   *p2 = temp;
   cout << "x= " << x << endl;
   cout << "y= " << y << endl;
}

// * Question 5
// TODO: Program that calculates the sum of elements in an integer array using a pointer to traverse the array.
void question5()
{
   const int SIZE = 5;
   int a[SIZE] = {14, 16, 90, 50, 33};
   int *p = a;
   int sum = 0;
   for (int i = 0; i < SIZE; i++)
   {
      sum = sum + *(p + i);
   }
   cout << "The sum is: " << sum << endl;
}

// * Main Menu
int main()
{
   int choice;

   do
   {
      cout << "\n=========================================\n";
      cout << "                LAB 05 MENU               \n";
      cout << "=========================================\n";
      cout << " 1. Modify Chars via Pointers\n";
      cout << " 2. Arithmetic via Pointers\n";
      cout << " 3. Sum of Range via Pointer\n";
      cout << " 4. Swap Strings via Pointers\n";
      cout << " 5. Sum of Array via Pointer\n";
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
      case 0:
         cout << "Exiting program." << endl;
         break;
      default:
         cout << "Invalid choice. Please try again." << endl;
      }

   } while (choice != 0);

   return 0;
}