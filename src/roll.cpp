//
#include "roll.h"

Roll::Roll(Die& Die1, Die& Die2): die1(Die1), die2(Die2) {} // initializer list baybeeee

//constructor needs to include functions in it? No.
void Roll::roll_die() {
    die1.roll();
    die2.roll();
    value = die1.rolled_value() + die2.rolled_value();
    rolled = true;
}

int Roll::roll_value() const {
    return value;
}