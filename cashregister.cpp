#include <iostream>
#include <iomanip>

using namespace std;

/**
    A simulated cash register that tracks the item count and the total amount due.
*/
class CashRegister
{
public:
    /**
        Default constructor
    */
    CashRegister();

    /**
        Adds an item to this cash register.
        @param price the price of the added item
    */
    void add_item(double price);

    /**
        Gets the price of all items in the current sale.
        @return the total amount
    */
    double get_total() const;

    /**
        Gets the number of items in the current sale.
        @return the item count
    */
    int get_count() const;

private:
    int item_count;
    double total_price;
};

// Define the default constructor
CashRegister::CashRegister()
{
    item_count = 0;
    total_price = 0;
}

void CashRegister::add_item(double price)
{
    item_count++;
    total_price = total_price + price;
}

double CashRegister::get_total() const
{
    return total_price;
}

int CashRegister::get_count() const
{
    return item_count;
}

// Define a function to display the calculations
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