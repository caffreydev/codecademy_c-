#include <iostream>
#include <vector>
#include "ufo_functions.hpp"

int main() {
greet();
std::string codeword = "codecademy";
std::string answer = "__________";
int misses = 0;
std::vector <char> incorrect;
bool guess = false;
char letter;

while (answer != codeword && misses < 7)
{
    guess = false;
    display_misses(misses);
    print_incorrect(incorrect);
    print_answer(answer);
    std::cout << "Please enter your guess: ";
    std::cin >> letter;
    for (int i=0; i < codeword.length(); i++)
    {
        if (letter == codeword[i])
        {
            guess = true;
            answer[i] = letter;
        }
    }
    if (guess)
    {
        std::cout << "Correct!\n";
    }
    else 
    {
        std::cout << "Incorrect! The tractor beam pulls the person in further!\n";
        incorrect.emplace_back(letter);
        misses++;
    }

}
end_game(answer, codeword);


}
