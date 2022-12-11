//
#include <iostream>

using namespace std;

class Die {

public:
    void roll();
    int rolled_value();

private:
    int roll_value;
    int sides{6};
};