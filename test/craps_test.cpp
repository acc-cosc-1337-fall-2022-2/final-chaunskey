#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "die.h"

bool verify_number(int value) {
    if (value >= 1 && value <= 6) return true;
}
TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("verify single roll 1 to 6") {
    Die die;
    die.roll();
    REQUIRE(verify_number(die.rolled_value()));
}

TEST_CASE("verify 10 rolls return 1 to 6") {
    Die die;
    for (int i = 0; i < 10; i++) {
        die.roll();
        REQUIRE(verify_number(die.rolled_value()));
    }
}