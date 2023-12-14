#include <iostream>
#include <vector>
#include "tictactoe_functions.hpp"

int main()
{
    std::cout << "Welcome, fancy a spot of tictactoe?";
    char turn = 'X';
    char status = 'z';
    int play[2];

    std::vector <std::vector<char>> board = {{'_', '_', '_'},{'_', '_', '_'},{'_', '_', '_'}};


    while (status == 'z')
    {
        print_board(board, turn);
        std::cout << "Which row do you want to play on (top 0, middle 1, bottom 2)? ";
        std::cin >> play[0];
        std::cout << "Which column do you want to play on (left 0, middle 1, right 2)? ";
        std::cin >> play[1];

        board = new_board(board, play, turn);

        status = check_status(board, turn);

        turn = turn == 'X' ? 'O' : 'X';
    }

    print_board(board, 'z');
    
    switch (status)
    {
        case ('D'):
        std::cout << "It's a draw!\n";
        break;
        case ('X'):
        std::cout << "Player X wins!\n";
        break;
        case ('O'):
        std::cout << "Player O wins!\n";
        break;
    }


}