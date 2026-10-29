#include "Circle.h"

// Constructor: initializes the radius to 0
Circle::Circle() {
    radius = 0.0;
}
void Circle::setRadius(double r) {
    radius = r;
}
double Circle::getRadius() {
    return radius;
}
double Circle::getArea() {
    return pi * radius * radius;
}
double Circle::getDiameter() {
    return radius * 2;
}
double Circle::getCircumference() {
    return 2 * pi * radius;
}