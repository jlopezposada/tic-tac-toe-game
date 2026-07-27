#include <iostream>
#include <vector>
#include <random>


// --------------------------------------------------
void display_board(std::vector<std::vector<char>> board) {
  std::cout << "Game Board: \n";

  for(int row = 0; row < board.size(); row++) {
    for(int col = 0; col < board[0].size(); col++) {
      if(col == 2) {
        std::cout << board[row][col];
        std::cout << "\n";
      } else {
        std::cout << board[row][col];
      }
    }
  }
  std::cout << "\n";
}
// --------------------------------------------------



//---------------------------------------------------
void welcome(std::string &playerOne, std::string &playerTwo, int &turnNumber) {

  std::cout << "Welcome to the game of Tic-Tac-Toe!\n";
  std::cout << "\n";
  std::cout << "Name of Player One: ";
  std::cin >> playerOne;
  std::cout << "Name of Player Two: ";
  std::cin >> playerTwo;
  std::cout << "\n";


  std::random_device rd;
  std::mt19937 engine(rd());
  std::uniform_int_distribution<int> firstPlay(1, 2);
  std::cout << "Randomizing First Play...\n";
  std::cout << "\n";


  if(firstPlay(engine) == 1) {
    turnNumber = 1;
    std::cout << playerOne << " will use the X symbol and " << playerTwo << " will use the O symbol!\n";
    std::cout << "\n";
  } else {
    turnNumber = 2;
    std::cout << playerTwo << " will use the X symbol and " << playerOne << " will use the O symbol!\n";
    std::cout << "\n";
  }
}
// --------------------------------------------------


// --------------------------------------------------
void playerTurn(std::string playerOne, std::string playerTwo, int turnNumber, std::vector<std::vector<char>> &board) {
  int row;
  int col;

  if(turnNumber % 2 == 1) {
    std::cout << playerOne << "'s Turn: \n";
    std::cout << "Select Row: ";
    std::cin >> row;
    while(row < 1 || row > 3) {
      std::cout << "\n";
      std::cout << "Invalid Input\n";
      std::cout << "Select New Row: ";
      std::cin >> row;
    }

    std::cout << "Select Column: ";
    std::cin >> col;
    while(col < 1 || col > 3) {
      std::cout << "\n";
      std::cout << "Invalid Input\n";
      std::cout << "Select New Column: ";
      std::cin >> col;
    }

    board[row - 1][col - 1] = 'X';
    turnNumber += 1;
    
  } else {
    std::cout << playerTwo << "'s Turn: \n";
    std::cout << "Select Row: ";
    std::cin >> row;
    while(row < 1 || row > 3) {
      std::cout << "\n";
      std::cout << "Invalid Input\n";
      std::cout << "Select New Row: ";
      std::cin >> row;
    }

    std::cout << "Select Column: ";
    std::cin >> col;
    while(col < 1 || col > 3) {
      std::cout << "\n";
      std::cout << "Invalid Input\n";
      std::cout << "Select New Column: ";
      std::cin >> col;
    }

    board[row - 1][col - 1] = 'O';
    turnNumber += 1;
    
  }
}
// --------------------------------------------------
