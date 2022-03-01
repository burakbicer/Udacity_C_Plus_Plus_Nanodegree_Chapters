#include <iostream>
#include <vector>
using std::vector;
using std::cout;

int main() {

    vector<vector<int>> b = {{1, 1, 2, 3},
                             {2, 1, 2, 3},
                             {3, 1, 2, 3}};
    // Print the length of an inner vector of b here.
    cout << "Lenght of 1.row vector is: " << b[0].size() << "\n";
    cout << "Lenght of 2.row vector is: " << b[1].size() << "\n";
    cout << "Lenght of 3.row vector is: " << b[2].size() << "\n";
}