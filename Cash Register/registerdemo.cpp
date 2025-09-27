#include <iostream>
#include <iomanip>
#include "cashregister.h"

using namespace std;

/**
    Displays the item count and total price of a cash register.
    @param reg the cash register to display
*/
void display(CashRegister reg)
{
    cout << "Item " << reg.get_count() << ": $" << fixed
    << setprecision(2) << reg.get_total() << endl;
}

int main()
{
    // Define an object of the CashRegister class with default constructor
    CashRegister register1;
    register1.add_item(1.95);
    display(register1);

    register1.add_item(0.95);
    display(register1);

    register1.add_item(2.50);
    display(register1);

    return 0;
}