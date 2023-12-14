#include <vector>


std::vector <std::vector<char>> new_board(std::vector <std::vector<char>> oldBoard, int play[2], char turn);

void print_board(std::vector <std::vector<char>> board, char turn);

char check_status(std::vector <std::vector<char>> oldBoard, char turn);
