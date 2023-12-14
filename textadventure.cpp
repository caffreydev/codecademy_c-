#include <iostream>
#include <vector>

int main()
{
    char choice = 'x';
        std::string beginning = "Geralt of rivia walked into a strange looking gothic castle he had never found before.\nHe was faced by 3 different doors, one blue, one red, and one yellow.\n";
        std::string doorOptions = "Choose a door, b for blue, r for red, or y yellow: ";
        std::cout << beginning;
        std::vector<std::string> endings = {
            "A Bruxa is on the other side!  It takes on your shape and gives you a terrible battle, which you are lucky to survive.\n",
            "A chernobog is on the other side!  It is huge, and even the brave Geralt is a little scared.  Best to run away, fast!\n",
            "A ghoul is on the other side!  It's a tough fight for most, but nothing Geralt hasn't dealt with many times before. A quick sign of Yrden, then Geralt cuts its head off with one swing of his silver sword!\n"                                
                                };

    while (choice != 'r' && choice != 'g' && choice != 'b')
    {
        std::cout << doorOptions;
        std::cin >> choice;
    }
    switch (choice)
    {
        case ('r'):
        std::cout << "You chose the red door!\n";
        std::cout << endings[0];
        break;
        case ('g'):
        std::cout << "You chose the green door!\n";
        std::cout << endings[1];
        break;
        case ('b'):
        std::cout << "You chose the blue door!\n";
        std::cout << endings[2];
        break;
    }

}