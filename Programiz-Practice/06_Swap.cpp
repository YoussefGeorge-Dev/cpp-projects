#include <iostream>
using namespace std; 

int main() 
{
int x,y,temp;
cout << "Enter your numbers" << endl;
cin >> x;
cin >> y;
cout << "The value of x is: " << x << endl;
cout << "The value of y is: " << y;

temp = x;
x = y;
y = temp;

cout << "The new value of x is: " << x << endl;
cout << "The new value of y is: " << y;

}