#pragma once
#include <iostream>
using namespace std;

class Circle
{
private:
    double radius;
    double pi;

public:
    // Constructor
    Circle();
    // Setters
    void setRadius(double r);
    // Getters
    double getRadius();
    double getArea();
    double getDiameter();
    double getCircumference();
    // Extra Request
    void display();
};
