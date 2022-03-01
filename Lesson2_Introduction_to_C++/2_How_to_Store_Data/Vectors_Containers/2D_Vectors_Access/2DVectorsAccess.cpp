#include <iostream>
#include <vector>
using std::vector;
using std::cout;

int main() {
    vector<vector<int>> b = {{1, 1, 2, 3},
                             {2, 1, 2, 3},
                             {3, 1, 2, 3}
                             };
    cout << "1.row 1.column: " << b[0][0] << "\n";
    cout << "1.row 2.column: "<< b[0][1] << "\n";
    cout << "1.row 3.column: "<< b[0][2] << "\n";
    cout << "1.row 4.column: "<< b[0][3] << "\n";
    cout << "2.row 1.column: "<< b[1][0] << "\n";
    cout << "2.row 2.column: "<< b[1][1] << "\n";
    cout << "2.row 3.column: "<< b[1][2] << "\n";
    cout << "2.row 4.column: "<< b[1][3] << "\n";
    cout << "3.row 1.column: "<< b[2][0] << "\n";
    cout << "3.row 2.column: "<< b[2][1] << "\n";
    cout << "3.row 3.column: "<< b[2][2] << "\n";
    cout << "3.row 4.column: "<< b[2][3] << "\n";
}