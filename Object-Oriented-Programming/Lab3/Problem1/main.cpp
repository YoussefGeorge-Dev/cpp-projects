#include "Circle.h"

int main()
{
    Circle c;
    cout << "The radius of circle c is currently " << c.getRadius() << endl;

    c.setRadius(5);
    cout << "The radius of circle c is currently " << c.getRadius() << endl;
    cout << "The area of circle c is currently " << c.getArea() << endl;
    cout << "The circumference of circle c is currently " << c.getCircumference() << endl;

    return 0;
}