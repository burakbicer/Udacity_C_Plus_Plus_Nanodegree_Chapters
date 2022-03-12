#include <iostream>
#include <vector>
using std::cout;
using std::vector;

// TODO: Add PrintBoard function here.

// 1.WAY
/*void PrintBoard(const vector<vector<int>> board){
    for(int i=0; i<board.size(); i++){
        for(int j=0; j<board[i].size(); j++){
            cout<<board[i][j] << " ";
        }
        cout<<"\n";
    }
}*/

// 2.WAY
void PrintBoard(const vector<vector<int>> board){
    for(auto v : board){   // OR   for(const std::vector<int> v : board){
        for(int i : v){
            cout<< i << " ";
        }
        cout<<"\n";
    }
}

int main() {
  vector<vector<int>> board{{0, 1, 0, 0, 0, 0},
                            {0, 1, 0, 0, 0, 0},
                            {0, 1, 0, 0, 0, 0},
                            {0, 1, 0, 0, 0, 0},
                            {0, 0, 0, 0, 1, 0}};
  
  // TODO: Call PrintBoard function here.
  PrintBoard(board);
  return 0;
}