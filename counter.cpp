#include <iostream>
#include <iomanip>

using namespace std;

/**
    A simulated counter that tracks the amount of times it was pressed.
*/
class Counter
{
public:
    /**
        Clears this counter
    */    
    void reset(); // mutator function

    /**
        Adds 1 to the current counter
    */  
    void count(); // mutator function

    /**
        Gets the count of the current counter
    */  
    int get_value() const; // accessor function

private:
    int value; // a data member
};

// Define the functions
void Counter::reset()
{
    value = 0;
}

void Counter::count()
{
    value = value + 1;
}

int Counter::get_value() const
{
    return value;
}

void display(Counter count)
{
    cout << "Count: " << count.get_value() << endl;
}

int main()
{
    Counter tally; // Declare an object of the class Counter
    tally.reset();
    tally.count();
    display(tally);

    tally.count();
    display(tally);

    tally.count();
    display(tally);

    tally.reset();
    display(tally);

    tally.count();
    display(tally);

    return 0;
}