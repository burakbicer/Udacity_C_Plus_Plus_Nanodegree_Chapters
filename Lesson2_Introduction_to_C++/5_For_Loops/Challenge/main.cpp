#include <iostream>
#include <vector>
using std::cout;
using std::vector;

// In the next cell, try to write a double range-based for loop that prints all of the entries of the 2D vector b.
int main() {
    vector<vector<int>> b {{1, 2},
                           {3, 4},
                           {5, 6}};

    // Write your double loop here.
    for(int i=0; i<b.size(); i++){  //b.size() = 3
        for(int j=0; j<b[i].size(); j++){  //b[i].size() = 2
            cout<<b[i][j]<<"\n";
        }
    } 
}