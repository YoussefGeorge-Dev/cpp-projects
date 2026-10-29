#pragma once
#include <iostream>
using namespace std;

class Circle {
private:
    double radius;       
    double pi = 3.14159; 

public:
    Circle();                  
    void setRadius(double r);  
    double getRadius();        
    double getArea();          
    double getDiameter();      
    double getCircumference(); 
};