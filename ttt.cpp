#include <iostream>
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
  
  while(turnNumber <= 9) {
    playerTurn(playerOne, playerTwo, turnNumber, board);
    display_board(board);

    if(check_winner(board)) {
      if(turnNumber % 2 == 1) {
        std::cout << playerOne << " Wins!\n";
      } else {
        std::cout << playerTwo << " Wins!\n";
      }
      break;
    }
  }

}