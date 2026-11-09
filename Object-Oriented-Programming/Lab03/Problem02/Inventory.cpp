#include "Inventory.h"

Inventory::Inventory()
{
    itemNumber = 0;
    quantity = 0;
    cost = 0.0;
    totalCost = 0.0;
}

bool Inventory::setItemNumber(int itemNo)
{
    if (itemNo < 0)
        return false;
    itemNumber = itemNo;
    return true;
}

bool Inventory::setQuantity(int q)
{
    if (q < 0)
        return false;
    quantity = q;
    return true;
}

bool Inventory::setCost(double c)
{
    if (c < 0)
        return false;
    cost = c;
    return true;
}

int Inventory::getItemNumber()
{
    return itemNumber;
}

int Inventory::getQuantity()
{
    return quantity;
}

int Inventory::getCost()
{
    return cost;
}

int Inventory::getTotalCost()
{
    return totalCost;
}

void Inventory::calTotalCost()
{
    totalCost = quantity * cost;
}

void Inventory::getAllValues()
{
    int n, q;
    double c;

    cout << "Enter item number: ";
    cin >> n;
    while (!setItemNumber(n))
    {
        cout << "Item number cannot be negative. Enter again: ";
        cin >> n;
    }

    cout << "Enter quantity: ";
    cin >> q;
    while (!setQuantity(q))
    {
        cout << "Quantity cannot be negative. Enter again: ";
        cin >> q;
    }

    cout << "Enter cost per item: ";
    cin >> c;
    while (!setCost(c))
    {
        cout << "Cost cannot be negative. Enter again: ";
        cin >> c;
    }

    calTotalCost();
}

void Inventory::display()
{
    cout << "The values of the created object are as follows:" << endl;
    cout << "Item number: " << itemNumber << endl;
    cout << "Quantity: " << quantity << endl;
    cout << "Cost: " << cost << " L.E." << endl;
    cout << "Total cost: " << totalCost << " L.E." << endl;
}
