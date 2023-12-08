#include <iostream>

int main()
{
    int years;
    std::cout << "How old is the dog in human years? ";
    std::cin >> years;
    float dogyears;
    if (years <= 2)
    {
        dogyears = years * 10.5;
    }
    else
    {
        dogyears = 21 + 4 * (years - 2);
    }
    std::cout << "Your pooch is: " << dogyears << " years old!\n";

}