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

void PrintVector(vector<int> v) {
  for (auto item : v) {
    cout << item << " ";
  }
  cout << "\n";
}

void ReadParseBoardFile(string path) {
  ifstream myfile (path);
  vector<int> test_vect;
  if (myfile) {
    string line;
    while (getline(myfile, line)) {      
      test_vect = ParseLine(line);
      PrintVector(test_vect);
    }
  }
}

int main() {
  ReadParseBoardFile("1.board");
}