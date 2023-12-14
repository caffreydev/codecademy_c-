#include <vector>
#include <iostream>

std::vector <std::vector<char>> new_board(std::vector <std::vector<char>> oldBoard, int play[2], char turn)
{
    oldBoard[play[0]][play[1]] = turn;
    return oldBoard;
}

void print_board(std::vector <std::vector<char>> board, char turn)
{
    if (turn != 'z')
    {
        std::cout << "\nIt's the turn of " << turn << " and the board looks like this:\n";
    }
    else
    {
        std::cout << "The final board:\n";
    }
    std::cout << board[0][0] << " | " << board[0][1] << " | " << board[0][2] << "\n";
    std::cout << board[1][0] << " | " << board[1][1] << " | " << board[1][2] << "\n";
    std::cout << board[2][0] << " | " << board[2][1] << " | " << board[2][2] << "\n";
}

char check_status(std::vector <std::vector<char>> board, char turn)
{
    if (board[0][0] == turn && board[0][0] == board[0][1] && board[0][0] == board[0][2])
    {
        return turn;
    }
        if (board[1][0] == turn && board[1][0] == board[1][1] && board[1][0] == board[1][2])
    {
        return turn;
    }
        if (board[2][0] == turn && board[2][0] == board[2][1] && board[2][0] == board[2][2])
    {
        return turn;
    }

        if (board[0][0] == turn && board[0][0] == board[1][0] && board[0][0] == board[2][0])
    {
        return turn;
    }
        if (board[0][1] == turn && board[0][1] == board[1][1] && board[0][1] == board[2][1])
    {
        return turn;
    }
        if (board[0][2] == turn && board[0][2] == board[1][2] && board[0][2] == board[2][2])
    {
        return turn;
    }

    if (board[0][0] == turn && board[0][0] == board[1][1] && board[0][0] == board[2][2])
    {
        return turn;
    }
    if (board[2][0] == turn && board[2][0] == board[1][1] && board[2][0] == board[0][2])
    {
        return turn;
    }

    if (board[0][0] == turn && board[0][0] != '_' && board[0][1] != '_' && board[0][2] != '_' && board[1][0] != '_' && board[1][1] != '_' && board[1][2] != '_' && board[2][0] != '_' && board[2][1] != '_' && board[2][2] != '_')
    {
        return 'D';
    }

    return 'z';
    
}