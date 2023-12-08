#include <iostream>
#include <cmath>

int main()
{
    char const* options [] = {"Rock", "Paper", "Scissors", "Lizard", "Spock"};
    while (true)
    {
        int playerChoice = -1;
        while (playerChoice < 0 || playerChoice > 4)
        {
        std::cout << "\nChoose Rock (0), Paper (1), Scissors (2), Lizard (3), or Spock (4), or quit (99): ";
        std::cin >> playerChoice;
        if (playerChoice == 99)
        {
            break;
        }
        std::cout << "You chose " << options[playerChoice] << ".\n";
        }
            if (playerChoice == 99)
        {
            break;
        }


        srand(time(NULL));
        int computerChoice = rand() % 5;

        if (computerChoice == playerChoice)
        {
            std::cout << "It's a tie! You and computer both chose " << options[playerChoice] << "!\n"; 
        }

        if (playerChoice == 0)
        {
            if (computerChoice == 3 || computerChoice == 2)
            {
                std::cout << "You win! Computer chose " << options[computerChoice] << "!\n";
            }
            else
            {
                std::cout << "You lose! Computer chose " << options[computerChoice] << "!\n";
            }

        }
        else if (playerChoice == 1)
        {
            if (computerChoice == 0 || computerChoice == 4)
            {
                std::cout << "You win! Computer chose " << options[computerChoice] << "!\n";
            }
            else
            {
                std::cout << "You lose! Computer chose " << options[computerChoice] << "!\n";
            }
        }
        else if (playerChoice == 2)
        {
            if (computerChoice == 1 || computerChoice == 3)
            {
                std::cout << "You win! Computer chose " << options[computerChoice] << "!\n";
            }
            else
            {
                std::cout << "You lose! Computer chose " << options[computerChoice] << "!\n";
            }
        }
        else if (playerChoice == 3)
        {
            if (computerChoice == 1 || computerChoice == 4)
            {
                std::cout << "You win! Computer chose " << options[computerChoice] << "!\n";
            }
            else
            {
                std::cout << "You lose! Computer chose " << options[computerChoice] << "!\n";
            }
        }
        else 
        {
            if (computerChoice == 2 || computerChoice == 0)
            {
                std::cout << "You win! Computer chose " << options[computerChoice] << "!\n";
            }
            else
            {
                std::cout << "You lose! Computer chose " << options[computerChoice] << "!\n";
            }
        }
}
}

//scissors cuts paper  2 beats 1, paper covers rock 1 beats 0
//rock crushes lizard 0 beats 3, lizard poisons spock  3 beats 4
//spock smashes scissors 4 beats 2, scissors decapitates lizard  2 beats 3
//lizard eats paper 3 beats 1, paper disproves spock 1 beats 4
//spock vaporises rock 4 beats 0, rock beats scissors 0 beats 2