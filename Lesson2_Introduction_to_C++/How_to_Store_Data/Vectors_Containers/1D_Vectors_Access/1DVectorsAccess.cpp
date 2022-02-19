#include <iostream>
#include <vector>
using std::vector;
using std::cout;

int main() {
    vector<int> a = {0, 1, 2, 3, 4};
    // Add some code here to access and print elements of a.
    cout << a[0] << "\n";
    cout << a[1] << "\n";
    cout << a[2] << "\n";
    cout << a[3] << "\n";
    cout << a[4] << "\n";
    cout << a[10] << "\n";  // Out-of-bound index. There is no error or exception thrown. Prints "0".
                            // In this case, the behavior is undefined.
}