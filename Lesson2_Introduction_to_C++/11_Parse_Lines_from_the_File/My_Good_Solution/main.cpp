#include <fstream>
#include <iostream>
#include <string>
#include <vector>
#include <sstream>

using std::cout;
using std::ifstream;
using std::string;
using std::vector;
using std::istringstream;

// TODO: Add the ParseLine function here.
vector<int> ParseLine(string line){

  istringstream sline(line);
  
  int n;
  char c;
  vector<int> row;
  
  while (sline >> n >> c && c == ','){  // OR  while (my_stream >> n >> c)
    row.push_back(n);
  }
  return row;
}

void PrintBoard(const vector<vector<int>> board) {
  for (int i = 0; i < board.size(); i++) {
    for (int j = 0; j < board[i].size(); j++) {
      cout << board[i][j];
    }
    cout << "\n";
  }
}

vector<vector<int>> ReadBoardFile(string path) {
  ifstream myfile (path);
  vector<vector<int>> board{};
  if (myfile) {
    string line;
    while (getline(myfile, line)) {      
      vector<int> row = ParseLine(line);
      board.push_back(row);
    }
  }
  return board;
}

int main() {
  auto board = ReadBoardFile("1.board");
  PrintBoard(board);
}