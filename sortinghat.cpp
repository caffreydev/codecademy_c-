#include <iostream>
#include <cmath>

int main()
{
    int griffPoints = 0;
    int huffPoints = 0;
    int slythPoints = 0;
    int ravPoints = 0;

    char answer;
    std::cout << "Do you hate mudbloods? (y/n): ";
    std::cin >> answer;

    if (answer == 'y' || answer == 'Y')
    {
        slythPoints++;
    }

    std::cout << "Are you very intelligent? (y/n): ";
    std::cin >> answer;

    if (answer == 'y' || answer == 'Y')
    {
        ravPoints++;
    }
    
    std::cout << "Are you a slice of bread short of a sandwich? (y/n): ";
    std::cin >> answer;

    if (answer == 'y' || answer == 'Y')
    {
        huffPoints++;
    }

    std::cout << "Are you very brave, not in a your mum said you were brave when you hurt your knee kind of way, but genuinely courageous? (y/n): ";
    std::cin >> answer;

    if (answer == 'y' || answer == 'Y')
    {
        griffPoints++;
    }

    std::cout << "Are you v arrogant? (y/n): ";
    std::cin >> answer;

    if (answer == 'y' || answer == 'Y')
    {
        slythPoints++;
    }

    std::cout << "Are you good at sudoku? (y/n): ";
    std::cin >> answer;

    if (answer == 'y' || answer == 'Y')
    {
        ravPoints++;
    }
    
    std::cout << "Do you find the plot of Inception to be incomprehensibly complicated? (y/n): ";
    std::cin >> answer;

    if (answer == 'y' || answer == 'Y')
    {
        huffPoints++;
    }

    std::cout << "Do you like lions? (y/n): ";
    std::cin >> answer;

    if (answer == 'y' || answer == 'Y')
    {
        griffPoints++;
    }

    std::cout << "Are you from an old money family? (y/n): ";
    std::cin >> answer;

    if (answer == 'y' || answer == 'Y')
    {
        slythPoints++;
    }

    std::cout << "Are you the mvp on the pub quiz team? (y/n): ";
    std::cin >> answer;

    if (answer == 'y' || answer == 'Y')
    {
        ravPoints++;
    }
    
    std::cout << "Don't not press y if you are too dumb to understand double negatives? (y/n): ";
    std::cin >> answer;

    if (answer == 'y' || answer == 'Y')
    {
        huffPoints++;
    }

    std::cout << "Are you hoping to get preferential treatment from the headmaster? (y/n): ";
    std::cin >> answer;

    if (answer == 'y' || answer == 'Y')
    {
        griffPoints++;
    }

    int allScores [] = {slythPoints, ravPoints, huffPoints, griffPoints};
    char* houseNames [] = {"Slytherin", "Ravenclaw", "Hufflepuff", "Griffyndor"};

    int maxPoints = -1;

    for (int i = 0; i < 4; i++)
    {
        maxPoints = allScores[i] > maxPoints ? allScores[i] : maxPoints;
    }

    int winners [4];
    int numWinners = 0;
    for (int i = 0; i < 4; i++)
    {
        if (allScores[i] == maxPoints)
        {
            winners[numWinners++] = i;
        }
    }

    if (numWinners == 1)
    {
        std::cout << "Welcome to " << houseNames[winners[0]] << "!\n";
    }
    else
    {
        srand(time(NULL));
        int tiebreaker = rand() % numWinners;
        std::cout << "Welcome to " << houseNames[winners[tiebreaker]] << "!\n";
    }



}