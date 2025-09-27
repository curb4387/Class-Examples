#ifndef CASHREGISTER_H
#define CASHREGISTER_H

/**
    A simulated cash register that tracks the item count and the total amount due.
*/
class CashRegister
{
public:
    /**
        Default constructor, constructs a cash register with cleared
        item count and total.
    */
    CashRegister();

    /**
        Clears the item count and the total.
    */
    void clear();

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

#endif