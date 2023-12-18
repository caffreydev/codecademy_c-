#include <iostream>
#include "profile.hpp"

int main() {
    Profile sam("Sam Drakkila",
    30, "New York", "USA", "male");


    sam.add_hobby("Rollerblading");
    sam.add_hobby("Stargazing");

    std::cout << sam.view_profile();
}
