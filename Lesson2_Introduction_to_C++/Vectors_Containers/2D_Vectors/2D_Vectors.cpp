#include <iostream>
#include <vector>
using std::vector;
using std::cout;

int main() {
    // Creating a 2D vector.
    vector<vector<int>> v {{1,2}, {3,4}};
    cout << "Great! A 2D vector has been created." << "\n";
    cout << "1.row and 1.column: " << v[0][0] << "\n";
    cout << "1.row and 2.column: " << v[0][1] << "\n";
    cout << "2.row and 1.column: " << v[1][0] << "\n";
    cout << "2.row and 2.column: " << v[1][1];
}