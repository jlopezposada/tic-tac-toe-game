#include <vector>

void display_board(std::vector<std::vector<char>> board);

void welcome(std::string &playerOne, std::string &playerTwo, int &turnNumber);

void playerTurn(std::string playerOne, std::string playerTwo, int &turnNumber, std::vector<std::vector<char>> &board);

bool check_winner(std::vector<std::vector<char>> board);