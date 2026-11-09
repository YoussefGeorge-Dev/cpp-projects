#include <iostream>
#include "Circle.h"
using namespace std;

int main()
{
    Circle c;               
    double r;

    cout << "Enter the circle's radius: ";
    cin >> r;

    c.setRadius(r);
    c.display();

    return 0;
}