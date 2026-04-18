#include <iostream>
using namespace std;

// * Question 1 

int main() 
{
 char first = 'A';
 char second = 'B';
 char* ptr1 = &first;
 char* ptr2 = &second;
 *ptr1 = 'C';
 *ptr2 = 'D';
 cout << "first: " << first << endl;
 cout << "first (via pointer): " << *ptr1 << endl;
 cout << "second: " << second << endl;
 cout << "second (via pointer): " << *ptr2 << endl;
 return 0;
}