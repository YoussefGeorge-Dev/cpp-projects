#pragma once
#include <iostream>
using namespace std;

class Inventory
{
private:
    int itemNumber;
    int quantity;
    double cost;
    double totalCost;

public:
    // Constructors
    Inventory();
    // Setters
    bool setItemNumber(int itemNo);
    bool setQuantity(int q);
    bool setCost(double c);
    // Getters
    int getItemNumber();
    int getQuantity();
    int getCost();
    int getTotalCost();
    // Calculate Total Cost
    void calTotalCost();
    // Extra Requests
    void getAllValues();
    void display();
};
