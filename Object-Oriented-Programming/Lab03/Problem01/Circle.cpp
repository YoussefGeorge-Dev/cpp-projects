#include "Circle.h"

Circle::Circle()
{
    radius = 0.0;
    pi = 3.141692654;
}

void Circle::setRadius(double r)
{
    radius = r;
}

double Circle::getRadius()
{
    return radius;
}

double Circle::getArea()
{
    return pi * radius * radius;
}

double Circle::getDiameter()
{
    return radius * 2;
}

double Circle::getCircumference()
{
    return 2 * pi * radius;
}

void Circle::display()
{
    cout << "The radius is " << radius << endl;
    cout << "The area is " << getArea() << endl;
    cout << "The circumference is " << getCircumference() << endl;
}
