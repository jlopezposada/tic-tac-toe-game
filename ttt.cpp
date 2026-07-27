#include <iostream>
#include <vector>
#include "ttt.hpp"

int main() {
  std::string playerOne = " ";
  std::string playerTwo = " ";
  int turnNumber;
  

  std::vector<std::vector<char>> board = {
    {'*', '*', '*'},
    {'*', '*', '*'},
    {'*', '*', '*'}
  };

  welcome(playerOne, playerTwo, turnNumber);

  display_board(board);
  
  playerTurn(playerOne, playerTwo, turnNumber, board);
  display_board(board);
}