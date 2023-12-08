#include <iostream>

int main ()
{
    const float COPUSD = 0.00025;
    const float BRLUSD = 0.20;
    const float PENUSD = 0.27;
    float pesos;
    float real;
    float soles;
    float dollars;

    std::cout << "Enter number of colombian pesos: ";
    std::cin >> pesos;
    std::cout << "Enter number of brazilian reals: ";
    std::cin >> real;
    std::cout << "Enter number of peruvian soles: ";
    std::cin >> soles;

    dollars = pesos * COPUSD + real * BRLUSD + soles * PENUSD;

    std::cout << "Drum roll please...... You have " << dollars << " in us dollars.\n";

}