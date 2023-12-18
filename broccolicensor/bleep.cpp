#include <iostream>
#include <string>
#include "functions.hpp"

int main ()
{
    std::string bad_word = "broccoli";
    std::string text = "I adore broccoli, broccoli is infact one of my very favourite foods. If broccoli stopped growing I would be very sad :/.\n";

    bleep(bad_word, text);

    std::cout << text;
}
