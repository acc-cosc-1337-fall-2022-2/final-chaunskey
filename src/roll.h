//
#include "die.h"

class Roll {

public:
    Roll(Die& Die1, Die& Die2);

    void roll_die();
    int roll_value() const;

private:
    Die& die1, die2; // declared not initialized
//    & whats being argued in is not a Die but a reference to a Die
//    passing in the location of the object in memory

    bool rolled = false;
    int value;

};
//look up refs and derefs

//class integer
//{
//private:
//    int a, b;
//public:
//    // Parameterized Constructor
//    integer(int x, int y)
//    {
//        a = x;
//        b = y;
//    };